#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {
		
		setlocale(LC_ALL, "portugues");
		
			int numero, soma = 0, i;
			
			printf("insira um numero maior que zero:\n");
			scanf("%d", &numero);
			
			for (i = 1; i < numero; i ++){
	
			if (numero % i == 0){
				soma += i;
			}
	}
			if (soma == numero){
				printf("%d é um numero perfeito", numero);
			} else{
				printf("%d nao é perfeito", numero);
			}
	return 0;
}
