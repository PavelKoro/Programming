#include <stdio.h>
#include"my_lib.h"

void space(int half, int count) {
	for(int i=1; i<=half+1-count; i++) {
		printf(" ");
	} 
	printf("*");		
	if (count>1) {
		for(int j=1; j<=(2*count-3); j++) {
			printf(" ");
		}
		printf("*");
	} 		
	printf("\n");
}

int main() {
	printf("Введите размерность ромба:");
	int size = read_int();
	if (size % 2 == 0) {
		printf("Введите нечетное число\n");
	} else {
		int half = (size /2);
		
		//Верхняя половина и средняя
		for(int count = 1; count<=half+1; count++) {
			space(half, count);
		}
		
		//нижняя половина
		for(int count = half; count>=1; count--) {
			space(half, count);	
		}		
	}
	return 0;
}



