#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, ".UTF8");
    int c;
    while((c = getchar()) !=EOF){
        printf("%d \n", getchar()!=EOF);
    }
    return 0;
}