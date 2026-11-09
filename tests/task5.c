//!!5. Сколько слов представляют собой неотрицательные целые числа?
#include <stdio.h>
#define MAXN 1000
#define ARR_LEN 20 
#define WORD_LEN 20

int is_negative_integer(const char *s) {
    if (s[0] != '-' || s[1] == '\0') {
        return 0;
    }

    for (int i = 1; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return 0;
        }
    }

    return 1;
}
int main() {
   char arr[ARR_LEN][WORD_LEN+1] = {""};
   char s[WORD_LEN+1] = "";
   int count = 0;
   int c=0;
   int i=0;
    while (count < ARR_LEN && 1 == scanf("%s", s)) {
            for (i = 0; s[i] != '\0'; i++) {
                     if (i == 0 && is_negative_integer(s)) {
                            c+=1;
                     }
            }
     }
        printf("%d\n", c);
        return 0;
}