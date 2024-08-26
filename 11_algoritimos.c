#include <stdio.h>

int main(void) {

  int n, i, cont = 0;

  printf("insira um numero:\n");
  scanf("%d", &n);

  for(i = 2; i <= n / 2; ++i){
    if(n %i == 0){
      cont = 1;
    }
  }
  if(cont == 0){
    printf("numero primo");
  }
  else{
    printf("numero nao primo");
  }
  return 0;
}
