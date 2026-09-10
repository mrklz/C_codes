#include <stdio.h>
int main(){
	int c;
	char letters[256];//создание массива для подсчета символов
	for(int i=0; i<256; i++){
		letters[i]=0;
	}
	while((c=getchar())!=EOF){
		letters[c]++;//заполняем количсевтом символов
	}
	for(int i=0; i<256; i++){
		if(letters[i]!=0){//если символ хоть раз появлялся
			printf("%c:", i);
			for(int j=0; j<letters[i]; j++){
				printf("_");//печать гистограммы
			}
			printf("\n");
		}
	}
	return 0;
}
