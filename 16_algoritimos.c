#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 30
int main (void){

    char palavra[tam], palavra_copia[tam];
    int len, i=0;
    printf("inserida uma palavra: ");
    scanf("%s",palavra);
    len = strlen(palavra);
    for(i = 0 ; i <= strlen(palavra) ; i++){
        palavra_copia[i] = palavra[len-1];
        len--;
    }
    palavra_copia[i]='\0';
    printf("\npalavra inserida: %s\n", palavra);
    printf("palavra comparaçao: %s\n",palavra_copia);
    for(int x = 0 ; x < strlen(palavra) ; x++){
        if(palavra[x] != palavra_copia[x]){
            printf("nao é palindroma...\n");
            break;
        }
        else{
            printf("palidroma\n");
            break;
        }
    }
	return 0;
}
