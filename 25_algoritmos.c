#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
void binario(int decimal){
	if (decimal == 0) {
		printf("%d", decimal);
	} else {
		binario(decimal / 2);
		printf("%d", decimal % 2);
	}
}
int main() {
	setlocale(LC_ALL, "portugues");
	
	int decimal;
	
	printf("insira um numero:\n");
	scanf("%d", &decimal);
	binario(decimal);
	return 0;
}
