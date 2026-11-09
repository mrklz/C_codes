/*4. Перевести все слова в массиве в верхний регистр
Для этого написать функцию my_toupper(int ch)*/
#include <stdio.h>
#define MAXN 1000
#define ARR_LEN 20 
#define WORD_LEN 20
int to_upper(int ch){
    if (ch >= 'a' && ch <= 'z') {
        return ch - ('a' - 'A');
    }
    return ch;
}
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
       
        for (i = 0; i < count; i++) {
            for (int j = 0; arr[i][j] != '\0'; j++) {
                printf("%c", to_upper(arr[i][j]));
            }
            printf("\n");
        }
        return 0;
}