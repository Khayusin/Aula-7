#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for(int x = 1; x <= numero; x++) {
        if(x % 2 == 1) { 
            soma += x;
        }
    }

    printf("A soma dos números ímpares é: %d\n", soma);
    return 0;
}