#include <stdio.h>
int main(){
    int a, b ;
    scanf("%d%d", &a, &b);
    int all = a+b-1;
    printf("%d %d", all-a, all-b);
}