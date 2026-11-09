#include <stdio.h>
/*1. Поместить в массив слова длиной не менее 5 (использовать)
my_strlen;*/
#define MAXN 1000
#define ARR_LEN 20 
#define WORD_LEN 20
int my_strlen(char array[]) {
    int i = 0;
    while (array[i] != '\0') {
        i++;
    }
    return i;
}   
int main() {
   char arr[ARR_LEN][WORD_LEN+1] = {""};
   char s[WORD_LEN+1] = "";
   int count = 0;
   int i=0;
    while (count < ARR_LEN && 1 == scanf("%s", s)) {
          if (my_strlen(s) >= 5) {
                for (i = 0; s[i] != '\0'; i++) {
                 arr[count][i] = s[i];
                }
                arr[count][i] = '\0';
                count++;
          }
     }
     for (i = 0; i < count; ++i) {
          printf("%s\n", arr[i]);
     }
     return 0;
}