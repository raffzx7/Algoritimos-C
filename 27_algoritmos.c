#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "Portuguese");
		
		int matriz1[2][2], matriz2[2][2], mat3[2][2];
		int linha, coluna;
		for (linha = 0; linha < 2; linha++){
			for (coluna = 0; coluna < 2; coluna++){
				printf("1° matriz: informe o valor da linha [%d] e da coluna [%d]:", linha, coluna);			
				scanf("%d", &matriz1[linha][coluna]);
		}		
	}	printf("\n 1°matriz \n ");
			for (linha = 0; linha < 2; linha++){
			for (coluna = 0; coluna < 2; coluna++){
				printf(" %2d", matriz1[linha][coluna]);	
			}printf("\n");
		}
	 printf("\n");
		for (linha = 0; linha < 2; linha++){
			for (coluna = 0; coluna < 2; coluna++){
				printf("2° matriz: informe o valor da linha [%d] e da coluna [%d]: ", linha, coluna);	
				scanf("%d", &matriz2[linha][coluna]);		
		}
	}
			printf("\n 2°matriz \n ");
			for (linha = 0; linha < 2; linha++){
			for (coluna = 0; coluna < 2; coluna++){
				printf(" %2d", matriz2[linha][coluna]);	
			}printf("\n");
		}
			printf("\n resultado \n");
			for (linha = 0; linha < 2; linha++){
			for (coluna = 0; coluna < 2; coluna++){
				mat3 [linha][coluna] = matriz1[linha][coluna] * matriz2[linha][coluna];
				printf ("linha[%d] coluna[%d] = %d\n", linha, coluna, mat3[linha][coluna]); 
				}
			}	
	return 0;	
	}
