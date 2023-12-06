#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2;

    printf("Vamos Calcular As medidas do triangulo Retangulo\n");
    printf("Digite o comprimento do primeiro cateto: ");
    scanf("%f", &cat1);

    printf("Digite o comprimento do segundo cateto: ");
    scanf("%f", &cat2);    
    float hipotenusa_quadrado = cat1 * cat1 + cat2 * cat2;

    float hipotenusa = sqrtf(hipotenusa_quadrado);
  
    float perimetro = cat1 + cat2 + hipotenusa;
  
    float area = 0.5 * cat1 * cat2;
  
    printf("\nQuadrado da hipotenusa: %.2f\n", hipotenusa_quadrado);
    printf("Hipotenusa: %.2f\n", hipotenusa);
    printf("Perímetro do triângulo: %.2f\n", perimetro);
    printf("Área do triângulo: %.2f\n", area);

    return 0;
}