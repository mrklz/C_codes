#include <stdio.h>
int main(){
	int c, pred_c=0;
	while((c=getchar())!=EOF){
		if(c!=' '  || pred_c != ' ') {
			printf("%c", c);
		}
		pred_c = c;
	}
	
	return 0;
}
