/* #include <stdio.h>
int main() {
    char ch;
    int count = 0;
    ch = fgetc(stdin);
    while (ch != EOF) {
        count++;
        ch = fgetc(stdin);
    }
    printf("%d\n", count);
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int a;
    fscanf(stdin, "%d", &a);
    fprintf(stdout, "%d\n", a);
    return 0;
}*/


#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Error opening file");
        return -1;
    }

    fclose(fp);
    return 0;
}