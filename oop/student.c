#include <stdio.h>
struct Student {
    char name[20];
    int date_of_birth;
    int regno;
};
void printStudent(struct Student s) {
    printf("%d %d %s\n", s.regno, s.date_of_birth, s.name);
}
void scanStudent(struct Student *s) {
    scanf("%d %d %s", &s->regno, &s->date_of_birth, s->name);
}
int main() {
    struct Student group[31];
    int n;
    scanf("%d", &n);
    struct Student temp;
    for (int i = 0; i < n; i++) {
        scanStudent(&temp);
        group[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        if(20261105 - group[i].date_of_birth >= 18) {
            printStudent(group[i]);
        }
    }
    return 0;
}