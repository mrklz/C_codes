#include <stdio.h>
#include <locale.h>
float celsius(float fahr){//функция для вычисления градусов Цельсия из Фаренгейта
	float temp = (5.0/9.0)*(fahr-32.0);
	return temp;
}
int main(){
		setlocale(LC_ALL, ".UTF8");
		printf("Таблица температур по Фаренгейту и Цельсию\n");
		float fahr=0;
		int upper=300, step=20;
		while(fahr<=upper){
			printf("%3.0f %6.1f\n", fahr, celsius(fahr));
			fahr+=step;
		}
		

	

	return 0;
}
