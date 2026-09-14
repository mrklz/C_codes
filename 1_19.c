#include <stdio.h>
int getline(char s[]){
	int c, i;
	for(i=0; i<1000&&(c=getchar())!=EOF && c!='\n'; i++)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		i++;
	}	
	s[i]='\0';
	return i;
}
int deleted(char s[]) {
	int i = 0;
	while (s[i] != '\0') { i++; }
	i--;
	if (s[i] == '\n') { i--; }
	while (i>=0 && (s[i] == ' '||s[i]=='\t')) { i--; }
	return i;
	
}

void reverse(char s[]){//переворот строки
	int i=0;
	while(s[i]!='\0'){i++;}//чтобы начать с конца строки
	while(i>=0){//пока не дошли в начало строки
		putchar(s[i]);
		i--;//переходим на предыдущий символ
	}
}


int main() { 
	int len;
	char line[1000];
	while((len=getline(line))>0){
		reverse(line);
	}
	return 0;
}
