#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, counter=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &a);
            if(a==1){
                counter+=abs(2-i);
                counter+=abs(2-j);
            }
        }
    }
    printf("%d", counter);
}
