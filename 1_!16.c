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
void copy(char to[], char from[]){
	int i=0;
	while((to[i]=from[i])!='\0'){
		i++;
	}
}
int main() { 
	int len, max=0;
	char line[1000];
	char longest[1000];
	while((len=getline(line))>0){
		if(len>max){
			max=len;
			copy(longest, line);
		}
	}
	if(max>0){
		printf("%s", longest);
	}
	
	
	return 0;
}
