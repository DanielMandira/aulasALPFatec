
#include <stdio.h>
#include <stdlib.h>

int exc05()
{
   double precof;
   double preco;
   printf("Calcule o valor dado de desconto\nDigite o valor do produto: ");
   scanf("%lf", &preco);
   printf("\nDigite o valor final: ");
   scanf("%lf", &precof);
   double percentValor = ((precof/preco)*100);
   double desc = (100-percentValor);
   printf("o valor do desconto aplicado foi de: %.3lf", desc);
   printf(" porcento");
   return 0;
}
