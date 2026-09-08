#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ".UTF8");
    printf("Таблица температур по Цельсию и Фаренгейту\n");
    float fahr, celsius=0;
    int upper=300, step=20;
    while(celsius<=upper){
        fahr=celsius*1.8+32;
        printf("%6.0f %3.0f\n", celsius, fahr);
        celsius+=step;
    }

    return 0;
}