/*3. Распечатать как в Питоне
[]
[hello]
[hello, world]*/
#include <stdio.h>
#define MAXN 1000
#define ARR_LEN 20 
#define WORD_LEN 20
 
int main() {
   char arr[ARR_LEN][WORD_LEN+1] = {""};
   char s[WORD_LEN+1] = "";
   int count = 0;
   int i=0;
    while (count < ARR_LEN && 1 == scanf("%s", s)) {
          arr[count][0] = '\0';
          for (i = 0; s[i] != '\0'; i++) {
                 arr[count][i] = s[i];
          }
          arr[count][i] = '\0';
          count++;
     }
        printf("[");
        for (i = 0; i < count; i++) {
            printf("%s", arr[i]);
            if (i < count - 1) {
                printf(", ");
            }
        }
        printf("]\n");
        return 0;
}