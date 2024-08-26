#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {
		
		setlocale(LC_ALL, "portugues");
		
		int numero, invertido = 0, resto;
		
		printf("inisra um numero: ");
		scanf("%d", &numero);
		
		while (numero != 0) {
			resto = numero % 10;
			invertido = invertido * 10 + resto;
			numero /= 10;
		}
		printf("a inverção dos numeros é é %d", invertido);
		return 0;
	}
