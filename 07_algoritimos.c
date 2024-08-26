#include <stdio.h>

int main() {

    int n1, fahrenheit;

    printf("insira a temperatura celcius:\n");
    scanf("%d", &n1);

    fahrenheit = (n1 * 1.8) + 32;

    printf("a convercao de temperatura de celicius para fahrenheit é: %d", fahrenheit);
    
    return 0;
}
