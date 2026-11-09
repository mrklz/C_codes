/*2. Распечатать в обратном порядке*/
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
        for (i = count-1; i >= 0; --i) {
            printf("%s\n", arr[i]);
        }
     
     return 0;
}