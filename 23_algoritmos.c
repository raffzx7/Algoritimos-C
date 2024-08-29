#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<time.h>

		int main() {
				setlocale(LC_ALL, "portugues");
				
				int i, number, random;
				
				srand(time(NULL));
				
				random = rand() %100;
				
				printf("descubra o numero q estou pensando de 0 a 100:\n");
				
				while (number != random){
					scanf("%d", &number);
					if (number < random){
						printf("maior\n");
					}
					if (number > random){
						printf("menor\n");
					}
					if (number == random){
						printf("numero correto");
					}
				}	  
}
