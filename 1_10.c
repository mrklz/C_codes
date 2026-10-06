#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, ".UTF8");
    int c; 
    
    while ((c = getchar()) != EOF) {//проверяем не конец ли файла
        if(c=='\t'){//если табуляция то меняем на символ табуляции
            printf("\\t");
        }
        else if(c=='\\'){//если обратная черта то меняем на ее символ и тд
            printf("\\\\");
        }
        else if(c=='\b'){
            printf("\\b");
        }
        else{//если просто строка пишем просто строку
            printf("%c", c);
        }
    }
    
    
    
    return 0;
}
