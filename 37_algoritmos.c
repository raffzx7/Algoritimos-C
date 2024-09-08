#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAX 50

	typedef struct{
	int frente;
	  int tras;
    	int tamanho;
      	int itens[MAX];
	} Fila;
	void inicioFila(Fila *f){
	  f->frente = 0;
    	f->tras = -1;
	      f->tamanho = 0;
	}
	  int estaCheia(Fila *f){
	    return f->tamanho == MAX;
	}
	  int estaVazia(Fila *f){
	    return f->tamanho == 0;
	}
	void enqueue(Fila *f, int valor){
	setlocale(LC_ALL, "Portuguese");
	  if (estaCheia(f)){
	printf("erro!\n");
	  } else{
	  f->tras = (f->tras + 1) % MAX;
	    f->itens [f->tras] = valor;
	      f->tamanho++;
	printf("numero %d inserido na posicaon", valor);
	}		
	}
	  int denqueue(Fila *f){
	setlocale(LC_ALL, "Portuguese");
	    if(estaVazia(f)){
	printf("erro!");
  	} else{
	  int valor = f-> itens[f->frente];
	    f->frente= (f->frente + 1) % MAX;
	      f->tamanho--;
	  return valor;
	}
	}
	  int peek(Fila *f){
	setlocale(LC_ALL, "Portuguese");
	  if (estaVazia(f)){
	printf("erro!");
	  return -1;
  	} else {
  	return f->itens[f->frente];
	}
	}	
  int main() {
	setlocale(LC_ALL, "Portuguese");
	Fila f;
	inicioFila(&f);
	int opcao, valor;
	do{
	printf("\n    MENU\n");
	  printf("|-----------|\n");
	    printf("opcao 1- inserir:\n");
	      printf("opcao 2- tirar:\n");
	        printf("opcao 3- primeiro: \n");
	          printf("opcao 4:\n");
	            printf("insira uma opção:\n");
	              scanf("%d", &opcao);
	                printf("\n");
	  switch (opcao){
	    case 1: 
	printf("insira o valor na posição:\n");
	scanf("%d", &valor);
	enqueue(&f, valor);
	  break;	
  	  case 2:
	valor = denqueue(&f);
	  if (valor != -1){
	printf("removido da posição\n");
	}
	  break;
	    case 3:
	valor = peek(&f);
	printf ("primeiro %d\n", valor);
    break;
	    case 4: 
	printf("saindo...\n");
	  break;
	    default:
	printf("erro!");	
  	break;	
	}				
	} while( opcao != 4);
	return 0;
	}
