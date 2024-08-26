#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {
		
		setlocale(LC_ALL, "portugues");
		
		int potencia,  numero, expoente;
		
		printf("insira a base: ");
		scanf("%d", &numero);
		
		printf("inisra o expoente: ");
		scanf("%d", &expoente);
		
		potencia = pow(numero, expoente);
		
		printf("o resultado da exponenciação é %d", potencia);

    return 0;
	}
