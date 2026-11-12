#include <stdio.h>
#define MAX_VISITORS 100
typedef struct {
    int id;
    char visitor_name[100];
    char attrack_name[100];
    unsigned char rating;
} Visitor;
void sort_middle_rating(Visitor array[], int n) {/* Выбрать самые лучшие и самые худшие аттракционы 
(по среднему рейтингу). Написать функцию "Средний рейтинг".*/
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(array[j].rating < array[j + 1].rating) {
                Visitor temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    Visitor array[MAX_VISITORS];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d %s %s %u", &array[i].id, array[i].visitor_name, array[i].attrack_name, &array[i].rating);
    }
    sort_middle_rating(array, n);
    printf("Sorted on rating:\n");
    for(int i = 0; i < n; i++) {
        printf("%d %s %s %u\n", array[i].id, array[i].visitor_name, array[i].attrack_name, array[i].rating);
    }
    return 0;
}