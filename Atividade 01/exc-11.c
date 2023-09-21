
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exc11()
{
   double qtd, ct, lt, cp, lp;
   printf("Calcule a quantidade de Tijolos\nDigite o comprimento da parede em metros: ");
   scanf("%lf", &cp);
   printf("Digite a largura da parede em metros: ");
   scanf("%lf", &lp);
   printf("Digite o comprimento dos tijolos em cm: ");
   scanf("%lf", &ct);
   printf("Digite a largura dos tijolos em cm: ");
   scanf("%lf", &lt);
   qtd = ((cp * lp) * (10000/(ct * lt)));
   printf("A quantidade de tijolos necessaria sera de: %.0lf", qtd);
   return 0;

}
