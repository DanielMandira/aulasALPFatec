
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exc09()
{
    double val_dolar;
    double cot;
    printf("Calcule o valor em reais\nDigite o valor em dolar: ");
    scanf("%lf", &val_dolar);
    printf("Digite o valor da cotacao do real: ");
    scanf("%lf", &cot);
    double val_real = (val_dolar * cot);
    printf("O Valor de $%.2lf", val_dolar);
    printf(" em reais eh: R$%.2lf",val_real);

    return 0;
}
