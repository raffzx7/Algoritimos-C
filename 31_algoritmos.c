#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL, "Portuguese");
		int tamanho, i, contador, aux;
		printf("quantidade de numeros:\n");
		scanf("%d", &tamanho);
					int numeros[tamanho];
		for (i = 0; i < tamanho; i++){
			printf("informe um numero %d:\n", i);
			scanf("%d", &numeros[i]);
	}
		printf("ordem dos números:\n");
			for(i = 0; i < tamanho; i++){
				printf(" %d", numeros[i]);
				}
			for (contador = 1; contador < tamanho; contador++){
				for (i = 0; i < tamanho - 1; i ++){
					if (numeros[i] > numeros[i + 1]){
						aux = numeros[i];
						numeros[i] = numeros[i + 1];
						numeros[i + 1] = aux;
					}
				}	
			}	
	 	printf("vertores organizados:\n");
	 		for (i = 0; i < tamanho; i++){
	 			printf("%2d", numeros[i]);
			 }
			printf("\n");	
	return 0;		
	}
