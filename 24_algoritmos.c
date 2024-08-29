#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "portuguess");
	
	long int binario, numero;
	
	int decimal = 0, base = 1, resto;
	
	printf("insira o numero em binario:\n");
	scanf("%ld", &numero);
	
	binario = numero;
	
	while (numero > 0) {
		resto = numero % 10;
		decimal = decimal + resto * base;
		numero = numero / 10;
		base = base * 2;;
	}
	
	printf("\n%ld em decimal é %i",binario, decimal);
	return 0;
}
