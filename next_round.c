#include <stdio.h>
#define MAX 1000

int main(void) {
    int n, k, counter=0;
    scanf("%d%d", &n, &k);
    int a[MAX];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if(a[i]>=a[k-1]&&a[i]>0){
            counter+=1;
        };
       
    }
    printf("%d", counter);
    return 0;
}
