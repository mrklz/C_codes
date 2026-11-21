#include <stdio.h>
#include <locale.h>
#include <string.h> 
#include <stdlib.h>
#define MAXN 100
typedef struct { // Дата
	int year;
	int month;
	int day;
} Date;
typedef struct { // Продавец
    int snum; // Код продавца 
    char sname[30]; // Фамилия
    char city[20]; // Город 
    float comm; // Комиссия
} Saler;
typedef struct { // Покупатель
    int cnum; // Код покупателя
    char cname[30]; // Имя
    char city[20]; // Город
    int rating; // Рейтинг
    int snum; // Код продавца
} Customer;
typedef struct { // Заказ
    int onum; // Код заказа
    int snum; // Код продавца
    int cnum; // Код покупателя
    Date odate; // Дата заказа
    float amount; // Сумма заказа
} Order;

void print_salers(Saler sales_people[], int total) { // Печать всех продавцов
    printf("Список продавцов фирмы \"Рога и Co\"\n");
    printf("Код\tФамилия \tГород   \tКомиссионные\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        printf("%d\t%-15s\t%-8s\t%-.2f\n", 
               sales_people[i].snum,
               sales_people[i].sname,
               sales_people[i].city,
               sales_people[i].comm);
    }
}

void print_customers(Customer customers[], int total) { // Печать всех покупателей(имя, город, код продавца)
    printf("Список покупателей фирмы \"Рога и Co\"\n");
    printf("Имя\tГород    \t[Код продавца]\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        printf("%-15s\t%-20s\t[%d]\n", 
               customers[i].cname,
               customers[i].city,
               customers[i].snum);
    }
}

void sort_and_print_orders( Order orders[], int total) { // Сортировка заказов по номеру заказа (onum)
    Order sorted_orders[MAXN];
    memcpy(sorted_orders, orders, total * sizeof *orders);
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (sorted_orders[j].onum > sorted_orders[j + 1].onum) {
                Order temp = sorted_orders[j];
                sorted_orders[j] = sorted_orders[j + 1];
                sorted_orders[j + 1] = temp;
            }
        }
    }
    // Печать отсортированных заказов
    printf("Список заказов фирмы \"Рога и Co\" (отсортировано по номеру заказа)\n");
    printf("Код заказа\tСумма заказа\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        printf("%d\t\t%.2f\n", 
               sorted_orders[i].onum,
               sorted_orders[i].amount);
    }
}

void print_salers_by_back_alphabetical_order( Saler sales_people[], int total) { // Сортировка всех продавцов в обратном алфавитном порядке
    Saler sorted_sales_people[MAXN];
    memcpy(sorted_sales_people, sales_people, total * sizeof *sales_people);
    for (int i = 0; i < total - 1; i++) {
        for (int j = 0; j < total - i - 1; j++) {
            if (strcmp(sorted_sales_people[j].sname, sorted_sales_people[j + 1].sname) < 0) {
                Saler temp = sorted_sales_people[j];
                sorted_sales_people[j] = sorted_sales_people[j + 1];
                sorted_sales_people[j + 1] = temp;
            }
        }
    }
    // Печать продавцов в обратном алфавитном порядке
    printf("Список продавцов фирмы \"Рога и Co\" (в обратном алфавитном порядке)\n");
    printf("Код\tФамилия \tГород   \tКомиссионные\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        printf("%d\t%-15s\t%-8s\t%-.2f\n", 
               sorted_sales_people[i].snum,
               sorted_sales_people[i].sname,
               sorted_sales_people[i].city,
               sorted_sales_people[i].comm);
    }
}

void print_customers_from_kovrov( Customer customers[], int total) { // Печать всех покупателей из города Ковров
    printf("Список покупателей из города Ковров\n");
    printf("Имя\tГород    \t[Код продавца]\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        if (strcmp(customers[i].city, "Ковров") == 0) {
            printf("%-15s\t%-20s\t[%d]\n", 
                   customers[i].cname,
                   customers[i].city,
                   customers[i].snum);
        }
    }
}

void print_customers_not_from_kovrov( Customer customers[], int total) { // Печать всех покупателей из города Ковров
    printf("Список покупателей не из города Ковров\n");
    printf("Имя\tГород    \t[Код продавца]\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        if (strcmp(customers[i].city, "Ковров") != 0) {
            printf("%-15s\t%-20s\t[%d]\n", 
                   customers[i].cname,
                   customers[i].city,
                   customers[i].snum);
        }
    }
}

void print_customers_with_saler_code( Customer customers[], int total) { // Печать ковровских покупателей 
    printf("Список ковровских покупателей\n");
    printf("Код\tИмя \tГород   \tРейтинг\t[Код продавца]\n");
    printf("====================================================\n");
    for (int i = 0; i < total; i++) {
        if (customers[i].snum == 1001 || customers[i].snum == 1004) {
            printf("%-15s\t%-20s\t%d\t[%d]\n", 
                   customers[i].cname,
                   customers[i].city,
                   customers[i].rating,
                   customers[i].snum);
        }
    }
}



// Функция меню, которая позволяет выбирать действия
void Menu(const Saler sales_people[], int saler_count,const Customer customers[], int customer_count, const Order orders[], int order_count) {
    printf("Меню:\n");
    printf("1. Показать продавцов\n");
    printf("2. Показать покупателей(имя, город, код продавца)\n");
    printf("3. Показать заказы(отсортировано по номеру заказа)\n");
    printf("4. Показать продавцов (в обратном алфавитном порядке)\n");
    printf("5. Показать покупателей из города Ковров\n");
    printf("6. Показать покупателей не из города Ковров\n");
    printf("7. Показать Ковровских покупателей\n");
    int choice;
    while (true) {
        printf("Выберите действие (1-7): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                print_salers(sales_people, saler_count);
                break;
            case 2:
                print_customers(customers, customer_count);
                break;
            case 3:
                sort_and_print_orders(orders, order_count);
                break;
            case 4:
                print_salers_by_back_alphabetical_order(sales_people, saler_count);
                break;
            case 5:
                print_customers_from_kovrov(customers, customer_count);
                break;
            case 6:
                print_customers_not_from_kovrov(customers, customer_count);
                break;
            case 7:
                print_customers_with_saler_code(customers, customer_count);
                break;
            
            default:
                printf("Неверный выбор! Попробуйте снова.\n");
        }
    }
}

int main() { // Заполнение всех массивов структур и вызов меню
    system("chcp 65001 > nul");
    FILE *fp;
    fp = fopen("in.txt", "r");
    if (!fp) {
        printf("Ошибка открытия файла!\n");
        return 1;
    }
    Saler sales_people[5];
    for (int i = 0; i < 5; i++) {
        fscanf(fp, "%d %29s %19s %f",
              &sales_people[i].snum,
              sales_people[i].sname,
              sales_people[i].city,
              &sales_people[i].comm);
    }

    Customer customers[7];
    for (int i = 0; i < 7; i++) {
        fscanf(fp, "%d %29s %19s %d %d",
              &customers[i].cnum,
              customers[i].cname,
              customers[i].city,
              &customers[i].rating,
              &customers[i].snum);
    }

    Order orders[10];
    for (int i = 0; i < 10; i++) {
        fscanf(fp, "%d %d %d %d.%d.%d %f",
              &orders[i].onum,
              &orders[i].cnum,
              &orders[i].snum,
              &orders[i].odate.year,
              &orders[i].odate.month,
              &orders[i].odate.day,
              &orders[i].amount);
             
    }

    Menu(sales_people, 5, customers, 7, orders, 10);
    fclose(fp);
}
