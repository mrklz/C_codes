#include <stdio.h>
#define MAXROWS 100
#define MAXCOLS 100

int main() {
	int mat[MAXROWS][MAXCOLS];
	int m;
	scanf("%d", &m);
	int r, c, counter=0, findc=0;
	for (r = 0; r < m; ++r)
			for (c = 0; c < m; ++c)
				scanf("%d", &mat[r][c]);
    for (r = 0; r < m; ++r){
			for (c = 0; c < m; ++c){
				if(r==c){
					counter+=mat[r][c];
					
				}
			}
	}
    printf("%d", counter);
    return 0 ;
    
}