#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

int main() {
	int mat[MAXROWS][MAXCOLS];
	int m;
	scanf("%d", &m);
	int r, c;
    double counter=0;
	for (r = 0; r < m; ++r)
			for (c = 0; c < m; ++c)
				scanf("%d", &mat[r][c]);
    for (r = 0; r < m; ++r) {
        counter += mat[r][m - 1 - r]; 
    }

    printf("%.2lf", counter/m);
    return 0 ;
    
}