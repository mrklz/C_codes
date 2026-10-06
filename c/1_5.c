#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ".UTF8");
    printf("Таблица температур по Фаренгейту и Цельсию\n");
    float fahr=300, celsius;
    int step=20;
    while(fahr>=0){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr-=step;
    }

    printf("Таблица температур по Цельсию и Фаренгейту\n");
    float fahr2, celsius2=300;
    int step2=20;
    while(celsius2>=0){
        fahr2=celsius2*1.8+32;
        printf("%6.0f %3.0f\n", celsius2, fahr2);
        celsius2-=step2;
    }

    return 0;
}