#include <stdio.h>
#define MAX 1000
int main() {
    int a[MAX];
    int len=0;
    
    if(scanf("%d", &a[len])==1){
        len++;
        while(scanf("+%d", &a[len])==1){
            len++;
        }
    }
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0; i<len; i++){
        if(i!=len-1)
        printf("%d+", a[i]);
        else
        printf("%d", a[i]);
    }
}
