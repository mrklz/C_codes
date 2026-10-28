#include <stdio.h>

#define TABWIDTH 8

void detab(void){
	int c, column=0;
	while((c=getchar())!=EOF){
		if(c=='\t'){
			do{
				putchar('_');
				column++;
			}while(column%TABWIDTH!=0);
		}else{
			putchar(c);
			if(c=='\n')
				column=0;
			else
				column++;
		}
	}
}

int main(){
	detab();
	return 0;
}
