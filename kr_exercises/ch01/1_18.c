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

int main() { 
	int len;
	char line[1000];
	while((len=getline(line))>0){
		if(deleted(line)>0)
			printf("%s", line);
	}
	return 0;
}
