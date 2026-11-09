#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    char c;
    char codef[11] = "codeforces";
    while(n!=0){
        int check = 0;
        scanf(" %c", &c);
        for(int i=0; i<10; i++){
            if(c==codef[i]){
                check+=1;
            }

        }
        if(check!=0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        n--;
    }
}