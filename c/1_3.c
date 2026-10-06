#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ".UTF8");
    printf("Таблица температур по Фаренгейту и Цельсию\n");
    float fahr=0, celsius;
    int upper=300, step=20;
    while(fahr<=upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr+=step;
    }

    return 0;
}