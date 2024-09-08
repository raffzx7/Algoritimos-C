#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL, "Portuguese");
		  int i, j, contador, menor, quant;
		printf("insira o vetor:\n");
		scanf("%d", &quant);
		  int selectionsort[i];
		printf("\n");
		   for (i=0; i<quant; i++){
		printf("insira aposição %d:\n", i);
		scanf("%d", &selectionsort[i]);			
		}
		  for (i=0; i<quant; i++){
			menor=i;
		  for (j=i+1; j<quant; j++)
		  if (selectionsort[j] < selectionsort[menor])
			menor =j;
				int aux = selectionsort[i];
				selectionsort[i] = selectionsort[menor];
				selectionsort[menor] = aux;
		}		
		printf("vetores organizados: ");
		  for (i=0; i<quant; i++){
		printf("%d ", selectionsort[i]);
		}
return 0;
	}
