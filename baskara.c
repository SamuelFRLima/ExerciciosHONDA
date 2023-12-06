#include <stdio.h>
#include <math.h>

int main() {
  float a = 0, b = 0, c = 0, dlt = 0, raiz1 = 0, raiz2 = 0;

  printf("digite os valores de A :\n" );
  scanf("%f", &a);
  printf("digite os valores de B :\n" );
  scanf("%f", &b);
  printf("digite os valores de C :\n" );
  scanf("%f", &c);

  dlt = (b * b) - 4 * a * c;
  raiz1 = ((-b + sqrt(dlt))/(2*a));
  raiz2 = ((-b - sqrt(dlt))/(2*a));

  
   if (isnan(raiz1) && isnan(raiz2)) {
      printf("A função não possui raízes reais.");
    } else if (raiz1 == raiz2) {
      printf("A função possui uma raíz real igual a: %f", raiz1);
    } else {
      printf("A função possui raízes iguais a: {%f, %f}", raiz1, raiz2);
    }



return 0;
}

