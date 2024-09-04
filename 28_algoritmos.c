#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
  int main() {
		setlocale(LC_ALL, "Portuguese");
				
		int matriz1[2][2], determinante, ad, bc, a, b, c, d;
		int linha, coluna;
			for (linha = 0; linha < 2; linha++){
				for (coluna = 0; coluna < 2; coluna++){
				printf("matriz: informe o valor da linha [%d] e da coluna [%d]:", linha, coluna);			
				scanf("%d", &matriz1[linha][coluna]);
		}		
	}
			for (linha = 1; linha < 2; linha++){
				for (coluna = 1; coluna < 2; coluna++){
					d = matriz1[linha][coluna];
			}
	}printf("\n");
			for (linha = 0; linha < 1; linha++){
				for (coluna = 0; coluna < 1; coluna++){
					a = matriz1[linha][coluna];
			}
	}printf("\n");
			for (linha = 1; linha < 2; linha++){
				for (coluna = 0; coluna < 1; coluna++){
					c = matriz1[linha][coluna];
			}
	}printf("\n");
			for (linha = 0; linha < 1; linha++){
				for (coluna = 1; coluna < 2; coluna++){
					b = matriz1[linha][coluna];
			}
	}printf("\n");
		ad = a * d;
		bc = b * c;
		determinante = ad - bc;
		printf("o determinador é é %d", determinante);
	return 0;
}
