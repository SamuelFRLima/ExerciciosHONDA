#include <stdio.h>

void torreHanoi(int n, char origem, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mova o disco 1 de %c para %c\n", origem, destino);
        return;
    }

    torreHanoi(n - 1, origem, destino, auxiliar);
    printf("Mova o disco de %d de %c para %c\n", n, origem, destino);
    torreHanoi(n - 1, auxiliar, origem, destino);
}

int main() {
    int n;
    
    printf("Informe o número de discos: ");
    scanf("%d", &n);

    printf("Os passos para resolver a Torre de Hanoi com %d discos são:\n", n);
    torreHanoi(n, 'A', 'B', 'C');

    return 0;
}