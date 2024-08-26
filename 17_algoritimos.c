#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	int main() {
		setlocale(LC_ALL, "portugues");
			int numero1, numero2, resto, a, b;
			
			printf("infrome o primeiro numero:\n");
			scanf("%d", &numero1);
			printf("infrome o segundo numero:\n");
			scanf("%d",&numero2);
			
			a = numero1; b = numero2;
			
			do{
				resto = a % b;
				a = b;
				b = resto;				
			}
			while (resto!=0);
				printf("o MDC ente %d e %d é %d\n", numero1, numero2, a);		
			
	return 0;
}
