/*Дана матрица размера M × N. Упорядочить ее столбцы так, чтобы
их максимальные элементы образовывали возрастающую последовательность.
*/
#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

int main() {
	int mat[MAXROWS][MAXCOLS];
	int m, n;
	int r, c, i, max1, max2, temp;
	scanf("%d %d", &m, &n);
	for (r = 0; r < m; ++r)
		for (c = 0; c < n; ++c)
			scanf("%d", &mat[r][c]);
	for (i = 0; i < n - 1; ++i) {
		for (c = 0; c < n - 1 - i; ++c) {
			max1 = mat[0][c];
			max2 = mat[0][c + 1];
			for (r = 1; r < m; ++r) {
				if (mat[r][c] > max1)
					max1 = mat[r][c];
				if (mat[r][c + 1] > max2)
					max2 = mat[r][c + 1];
			}
			if (max1 > max2) {
				for (r = 0; r < m; ++r) {
					temp = mat[r][c];
					mat[r][c] = mat[r][c + 1];
					mat[r][c + 1] = temp;
				}
			}
		}
	}
	for (r = 0; r < m; ++r) {
		for (c = 0; c < n; ++c)
			printf("%d ", mat[r][c]);
		printf("\n");
	}
	return 0;
}
