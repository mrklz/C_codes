#include <stdio.h>
#include <math.h>
#define MAX 1000
int main(){
    double a[MAX];
    int n = 0;
    while (n < MAX && scanf("%lf", &a[n]) == 1)
        n++;

    for(int i=n-1; i>=0; i--){
        printf("%.4lf\n", sqrt(a[i]));
    }
    return 0;
}