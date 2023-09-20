#include <stdio.h>
#include <stdlib.h>

int exc04()
{
    double pr;
    double d;
    printf("Calcule o valor a ser pago\nDigite o valor do produto: ");
    scanf("%lf", &pr);
    printf("\nDigite o valor do desconto: ");
    scanf("%lf", &d);
    double desc = (pr * ( d / 100));
    double pag=(pr - desc);
    printf("o valor a ser pago eh: R$ %.2lf", pag);
   return 0;
}
