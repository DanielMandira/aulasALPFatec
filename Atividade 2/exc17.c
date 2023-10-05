#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc17()
{
    double pr = 0;
    int co = 0;
    printf("Digite o preco do produto: R$");
    scanf("%lf", &pr);
    printf("Digite o codigo de origem: \n1 -> Sul \n2 -> Sudeste \n3 -> Centro-Oeste \n4 -> Norte \n5 -> Nordeste\n");
    scanf("%d", &co);
    switch(co)
    {
    case 1:
        printf("O valor do produto eh %.2lf e a sua origem eh o Sul", pr);
        break;
    case 2:
        printf("O valor do produto eh %.2lf e a sua origem eh o Sudeste", pr);
        break;
    case 3:
        printf("O valor do produto eh %.2lf e a sua origem eh o Centro-Oeste", pr);
        break;
    case 4:
        printf("O valor do produto eh %.2lf e a sua origem eh o Norte", pr);
        break;
    case 5:
        printf("O valor do produto eh %.2lf e a sua origem eh o Nordeste", pr);
        break;
    default:
        printf("Comando Invalido!");
        break;
    }
    return 0;
}

