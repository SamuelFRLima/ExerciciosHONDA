
//Calculadora de salario
// FGTS = 8%
// irpf = 27,5%

#include <stdio.h>

int main () {

float bruto = 0, vale = 0, minimo = 0, fgts = 0, irpf = 0, liquido = 0;

printf("Insira o o valor do salário bruto: \n");
  scanf("%f", &bruto);

printf("\nInsira o valor do vale alimentação: \n");
  scanf("%f", &vale);


liquido = bruto - ((bruto * 0.275) + (bruto * 0.08)) + vale;

if (liquido < 1320){
  printf("Seu salário líquido é de: 1320");
}

  else if (liquido > minimo){
    printf("\nSeu salário líquido é de: %.2f", liquido);
  }

return 0;
  
}