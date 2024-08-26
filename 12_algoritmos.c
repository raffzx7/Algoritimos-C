#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {

		setlocale(LC_ALL, "portugues");

		int quantidade, numeros, contador, resultado = 0;

		printf ("Quantas vezes deseja realizar a soma: ");
		scanf("%d", &quantidade);

		for (contador = 0; contador < quantidade; contador++) {

			printf("\nDigite os numero: ");
			scanf("%d", &numeros);

		resultado += numeros;
		}
		printf("\nO resultado da soma é %d", resultado);
		return 0;
}
