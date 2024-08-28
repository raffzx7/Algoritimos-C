#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL, "portugues");
			int quant, i, j, temporario;					
			printf ("insira a quantidade que quer insirir:\n");
			scanf("%i", &quant);
		
			int  numeros[quant];
			printf("\n");
			
			for (i = 0; i < quant; i++) {
				printf("insira o numero:\n");
				scanf("%i", &numeros[i]);	}
				
				for(i=0; i < quant-1; i++){
					for (j = (i+1); j < quant; j++) {
				 	if (numeros[i] > numeros[j]){
				 		temporario = numeros[i];
				 		numeros[i] = numeros[j];
				 		numeros[j] = temporario;			 		
					 }				 
				 }
				}				
		for (i = 0; i < quant; i++) {
		printf("%i ", numeros[i]);
	}
	return 0;
}
