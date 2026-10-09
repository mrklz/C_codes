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

int main() { 
	int len;
	char line[1000];
	while((len=getline(line))>0){
		if(len>80){
			printf("%s", line);
		}
	}
	
	
	
	return 0;
}
