#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc06()
{
    double p = 0;
    printf("Digite o valor do produto: R$");
    scanf("%lf", &p);
    if(p>=50 && p<=100)
    {
        printf("Em Promocao!");
    }
    else
    {
        printf("Preco Normal!");
    }
    return 0;
}
