#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n!=0){
        int pers, count=0, perses[4];
        for(int i=0; i<4; i++){
            scanf("%d", &perses[i]);
            if(perses[i]>perses[0]){
                count+=1;
            }
        }
        printf("%d\n", count);
        n--;
    }
}