#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	int main() {
		
		setlocale(LC_ALL, "Portuguese");
		
		int quantidade, contador, p1= 0, p2= 1, proximotermo;
		
		printf ("Quantas vezes deseja realizar a sequência: ");
		scanf("%d", &quantidade);
		
		for (contador = 0; contador < quantidade; contador++) {
			printf("%d ", p1);
			proximotermo = p1+p2;
			p1=p2;
			p2=proximotermo;
		
	}
		
		}
