#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int x=0;
    for (int i = 0; i < n; i++) {
        char word[4];
        scanf("%s", word);
        if(word[1]=='+')
            x+=1;
        else
            x-=1;
    }
    printf("%d", x);
    return 0;
}
