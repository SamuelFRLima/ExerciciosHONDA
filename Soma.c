#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    
    if (numero < 0) {
        printf("Entrada invalida. Por favor, insira um numero inteiro positivo.\n");
    } else {
        int soma = 0;
        for (int i = 0; i <= numero; i++) {
            soma += i;
        }

        printf("A soma dos numeros de 0 ate %d eh: %d\n", numero, soma);
    }

    return 0;
}