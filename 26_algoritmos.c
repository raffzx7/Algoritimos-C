#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "Portuguese");
		
		int matriz1[2][2] = {2,3,6,9}, matriz2[2][2] = {7,4,1,5}, mat3[2][2];
		int i, j;
		for(i = 0; i < 2; i++){
			for(j = 0; j < 2; j++)
				printf(" %2d ", matriz1[i][j]);
				printf("\n");
	} printf("    +\n");
		for(i = 0; i < 2; i++){
			for(j = 0; j < 2; j++)
				printf(" %2d ", matriz2[i][j]);
				printf("\n");										
} printf("    =\n");
		for (i = 0; i < 2; i++){
			for (j = 0; j < 2; j++){
				mat3[i][j] = matriz1[i][j] + matriz2[i][j];
			}		
		}
		for(i = 0; i < 2; i++){
			for(j = 0; j < 2; j++)
				printf(" %2d ", mat3[i][j]);
				printf("\n");				
		}
	return 0;	
	}
