#include <stdio.h>
int main(){
    int n;
    char c;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int count=0;
        scanf("%c", &c);
        char frst_c=c;
        while(c!='\n'){
            count+=1;
            scanf("%c", &c);
        }
        printf("%c%d%c\n", frst_c, count, с);
    }

    
    return 0;
}
