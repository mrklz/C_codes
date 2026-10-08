#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 1000
int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char word[MAX_LENGTH];
        scanf("%s", word);

        int length = strlen(word);
        if (length > 10) {
            printf("%c%d%c\n", word[0], length - 2, word[length - 1]);
        } else {
            printf("%s\n", word);
        }
    }

    return 0;
}
