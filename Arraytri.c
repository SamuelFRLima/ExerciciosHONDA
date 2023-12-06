#include <stdio.h>

int main() {
    // Definindo as dimensões do array
    const int dim1 = 10;
    const int dim2 = 20;
    const int dim3 = 5;

    // Criando o array tridimensional
    int array[dim1][dim2][dim3];

    // Preenchendo o array com valores sequenciais
    int contador = 1;
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                array[i][j][k] = contador++;
            }
        }
    }

    // Apresentando os valores
    printf("Valores do array tridimensional:\n");
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                printf("%3d ", array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}