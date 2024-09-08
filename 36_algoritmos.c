#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define MAX 50
		  typedef struct{
		  int topo;
		    int itens[MAX];	
		} Pilha;
	  	void inicioPilha(Pilha *p){
	  	  p->topo = -1;
		}
		  int cheia(Pilha *p){
		    return p->topo == MAX - 1;
		}
		  int vazia(Pilha *p){
		    return p->topo ==-1;
		}
		  int push(Pilha *p, int valor){
		setlocale(LC_ALL, "Portuguese");
		    if (cheia(p)){
		printf("Erro: A pilha está cheia!\n");
  		  } else{
		      p->itens[++(p->topo)] = valor;
		printf("Valor %d inserido na pilha.\n", valor);
			}		
		}
		  int pop(Pilha *p){
		setlocale(LC_ALL, "Portuguese");
		  if (vazia(p)){
		printf("Erro: A pilha está vazia!\n");
		  return -1;
	  	  } else {
		      return p->itens[(p->topo)--]; 
		}
		}
		  int peek(Pilha *p){
		setlocale(LC_ALL, "Portuguese");
		  if (vazia(p)){
		printf("Erro: A pilha está vazia!\n");
	    	return -1;
	  	    } else {
	      	  return p->itens[(p->topo)];
		}
		}
	    int main() {
		setlocale(LC_ALL, "Portuguese");
		  Pilha p;
		inicioPilha(&p);
		  int opcao, valor;
	    do{
		printf("\n    MENU\n");
		  printf("|-----------|\n");
	    	printf("Opção 1- Inserir:\n");
		      printf("Opção 2- Remover:\n");
		        printf("Opção 3- Mostrar o topo: \n");
		          printf("Opção 4- Sair:\n");
		            printf("Escolha uma opção: ");
		            scanf("%d", &opcao);
		            printf("\n");
	  	switch (opcao){
		    case 1: 
		printf("Insira o valor na pilha: \n");
		scanf("%d", &valor);
		push(&p, valor);
		  break;	
		    case 2:
		valor = pop(&p);
		  if (valor != -1){
		printf("Valor removido da pilha\n");
		}
		  break;
		    case 3:
		      valor = peek(&p);
		printf ("Valor do topo da pilha %d\n", valor);
		  break;
		    case 4: 
		printf("Saindo...\n");
		  break;
		    default:
		printf("Opção inválida");	
		}				
		} while( opcao != 4);
	 return 0;
	 }
