#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100
/*заменям столбцов с минимальным и максимальным значениями*/
int main() {
	int mat[MAXROWS][MAXCOLS];
	int rows, cols;
	scanf("%d %d", &rows, &cols);
	int r, c;
	for (r = 0; r < rows; ++r)
			for (c = 0; c < cols; ++c)
				scanf("%d", &mat[r][c]);
    
    int max=mat[0][0], cmax=0, min=mat[0][0], cmin=0;
	for (r = 0; r < rows; ++r) { //поиск мин и макс чисел и нужных столбцов
		for (c = 0; c < cols; ++c){
			if(mat[r][c]<min){
                min=mat[r][c];
                cmin=c;
            }
            if(mat[r][c]>max){
                max=mat[r][c];
                cmax=c;
            }
		}
	}
    for (r = 0; r < rows; ++r) { //вывод
		for (c = 0; c < cols; ++c){
			if(c==cmax){
                printf("%d ", mat[r][cmin]);
            }
            else if(c==cmin){
                printf("%d ", mat[r][cmax]);
            }
            else printf("%d ", mat[r][c]);
		}
		printf("\n");
	}
	return 0;
}