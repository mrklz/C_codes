#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, ".UTF8");
    int c;
    int tabs = 0;//подсчет табуляций
    int strgs = 0;//подсчет строк
    int spaces = 0;//подсчет пробелов
    while ((c = getchar()) != EOF) {
        if(c=='\n'){
            strgs+=1;
        }
        if(c=='\t'){
            tabs+=1;
        }
        if(c==' '){
            spaces+=1;
        }
    }
    printf("%d\n%d\n%d", tabs, spaces, strgs);
    
    
    return 0;
}
