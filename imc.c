#include <stdio.h>
#include <math.h>

int main() {
    float imc = 0, peso = 0, altura = 0, pesoideal = 0, alt2 = 0; 
    char genero;

    printf("Vamos calcular seu IMC. Insira seu peso em kg: \n");
    scanf("%f", &peso);
    printf("Agora insira sua altura em metros: \n");
    scanf("%f", &altura);
    printf("Insira seu gênero (M para masculino, F para feminino): \n");
    scanf(" %c", &genero);

    alt2 = altura * 100;

    if (genero == 'M') {
        pesoideal = 52 + 0.75 * (alt2 - 152.4);
    } else if (genero == 'F') {
        pesoideal = 42 + 0.67 * (alt2 - 152.4);
    } else {
        printf("Gênero não reconhecido. Por favor, insira M ou F.\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
        printf("Seu peso ideal seria: %.2f.\n", pesoideal);
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Você está com seu peso ideal.\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Sobrepeso.\n");
        printf("Seu peso ideal seria: %.2f.\n", pesoideal);
    } else if (imc >= 30 && imc < 34.9) {
        printf("Obesidade 1.\n");
        printf("Seu peso ideal seria: %.2f.\n", pesoideal);
    } else if (imc >= 35 && imc < 39.9) {
        printf("Obesidade 2.\n");
        printf("Seu peso ideal seria: %.2f.\n", pesoideal);
    } else {
        printf("Obesidade 3.\n");
        printf("Seu peso ideal seria: %.2f.\n", pesoideal);
    }

    return 0;
}