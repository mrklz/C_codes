/*
Разность дат. Вариант 1. 6 переменных
*/

#include <stdio.h>

typedef struct {
	int year;
	int month;
	int day;
} Date;

int main() {
	Date date_begin;
	Date date_end;
	Date date_diff;

	scanf("%d.%d.%d", &date_begin.year, &date_begin.month, &date_begin.day);
	scanf("%d.%d.%d", &date_end.year, &date_end.month, &date_end.day);

	date_diff.day = date_end.day - date_begin.day;
	date_diff.month = date_end.month - date_begin.month;
	date_diff.year = date_end.year - date_begin.year;

	printf("%d.%d.%d\n", date_diff.year, date_diff.month, date_diff.day);

	return 0;
}

