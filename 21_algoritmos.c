#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

		int main() {
				setlocale(LC_ALL, "portugues");
			
			int numero, quantidade, i, chave, encontrado = -1;
			
			printf("insira a quantidade que quer inserir:\n");
			scanf("%d", &quantidade);	
			printf("\n");
			printf("insira o numero:\n");
			int vetor[quantidade];
			for (i = 0; i < quantidade; i++){
				scanf("%i", &vetor[i]);
			}
			printf("insira o numero deseja encotrar:\n");
			scanf("%d", &chave);
			for (i = 0; i < quantidade; i++){
			if (vetor[i] == chave) {
			encontrado = i;
		}	}
			if (encontrado != -1)
				printf("numero encontrado\n");
			else 
				printf("erro!\n");
			return 0;}
