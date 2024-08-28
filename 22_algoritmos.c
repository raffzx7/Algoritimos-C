#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

		int main() {
			printf("\n0 1 2 3 4 5 6 7 8 (posicao)\n");
				setlocale(LC_ALL, "portugues");
      
				int vetor[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
				int chave, resultado = -1, i, contador;
				
			for (contador = 0; contador < 9; contador++){
				printf("%i ", vetor[contador]);
			} printf("(numeros)");
			printf("\n");
			printf("\ninsira o numero que deseja encontrar:\n");
			scanf("%d", &chave);
			for (i = 0; i < chave; i++){
			if (vetor[i] == chave) {
			resultado = i;
		}	}
			if (resultado != -1)
				printf("\no numero inserido foi encontrado na posicao %d\n", resultado);
			else 
				printf("erro\n");
			return 0;}
