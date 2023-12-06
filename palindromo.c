#include <stdio.h>

int main() {
    int numero, original, inverso = 0, digito;

    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &numero);

    
    original = numero;

    while (numero > 0) {
        digito = numero % 10;
        inverso = inverso * 10 + digito;
        numero/= 10;
    }

  
    if (original == inverso) {
        printf("%d eh um palindromo.\n", original);
    } else {
        printf("%d nao eh um palindromo.\n", original);
    }

    return 0;
}