#include <stdio.h>
int main(){
	int c;
	while((c=getchar())!=EOF){
		if(c==' '){
			printf("\n");
		}
		printf("%c",c);
	}
	
	
	return 0;
}
