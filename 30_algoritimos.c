#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
	int main() {
		setlocale(LC_ALL, "Portuguese");
		  char palavra[30];
		printf("insira um numero: ");
		scanf("%s", &palavra);
		  int x = atoi(palavra);
		printf("%d", x);
		return 0;
	}
