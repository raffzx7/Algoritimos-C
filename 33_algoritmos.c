#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL, "Portuguese");
		  int aux, i, j, quant;
		printf("insira o vetor:\n");
		scanf("%d", &quant);
		  int vetor[i];
		printf("\n");
		  for(i=0; i < quant; i++){
		printf("insira um numero da posição %d:\n", i);
		scanf("%d", &vetor[i]);
		}
		  for (i=1; i < quant; i++){
			  j=i;
			    aux=vetor[j];
			      while (j>0 && aux < vetor[j-1]){
					    vetor[j] = vetor[j-1];
					      j--; 
				          }
			            vetor[j]=aux;
				            }
		printf("o vetor é:\n");
		  for(i=0; i<quant; i++){
		printf("%d ", vetor[i]);
		}
	return 0;
	}
