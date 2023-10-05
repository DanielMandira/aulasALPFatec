#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc10()
{
    int a = 0, b = 0, sum = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a == b)
    {
        sum = a + b;
        printf("O valor da soma de A + B eh: %d", sum);
    }
    else if( a < b)
    {
        sum = b - a;
        printf("O diferenca entre A e B eh: %d", sum);
    }
    else if(b < a)
    {
        sum = a - b;
        printf("O diferenca entre A e B eh: %d", sum);
    }
    return 0;
}

