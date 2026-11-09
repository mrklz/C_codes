#include <stdio.h>
#include <string.h>
#define MAX 1000
int main(){
    char str1[MAX];
    char str2[MAX];
    scanf("%s", &str1);
    scanf("%s", &str2);
    int res = strcasecmp(str1, str2);
    if(res<0) printf("-1");
    else if(res>0) printf("1");
    else printf("0");
}