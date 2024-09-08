#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	int particiona( int *v, int inicio, int final){
		int pivo = (v[inicio] + v[final] + v[(inicio+final)/2]) / 3;
		while(inicio<final){
			while(inicio<final && v[inicio]<=pivo)
				inicio=inicio+1;
			    while(inicio<final && v[final]>pivo)
					  final=final-1;
		int aux=v[inicio];
			v[inicio]=v[final];
				v[final]=aux;
				}
		return inicio;
	}
	void quickSort(int *v, int inicio, int fim){
		  if (inicio<fim){
		int posi = particiona(v, inicio, fim);
		  quickSort(v, inicio, posi-1);
		    quickSort(v, posi+1, fim);
		}
	}
	int main(){
		  setlocale(LC_ALL, "Portuguese");
		int quant, i;
		printf("Informe o tamanho do vetor: ");
		scanf("%d", &quant);
		int *vetor = (int *)malloc(quant * sizeof(int));
		  for (i=0; i<quant; i++){
		printf("Posição %d: ", i);
		scanf("%d", &vetor[i]);
		}
		quickSort(vetor, 0, quant-1);-
		printf("VETOR ORDENADO:");
		  for(i=0; i<quant; i++){
		printf("%d ", vetor[i]);
		}
		free(vetor);
		return 0;
	}
