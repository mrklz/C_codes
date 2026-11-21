#include <stdio.h>
int main(){
    char ch=0;
    int in = 1;
    float fl = 2.0;    
    double db = 3.0;
    char *c = &ch;
    int *i = &in;
    float *f = &fl;
    double *d = &db;
    printf("char: %p\n", c);
    printf("int: %p\n", i);
    printf("float: %p\n", f);
    printf("double: %p\n", d);
}