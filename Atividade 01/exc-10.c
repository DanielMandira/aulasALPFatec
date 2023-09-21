#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exc10()
{
    int a, b, c;
    printf("Inverta os valores\nDigite o valor de 'A': ");
    scanf("%d", &a);
    printf("Digite o valor de 'B': ");
    scanf("%d", &b);
    printf("Os valores de 'A' e 'B' sao: a = %d", a);
    printf(" e b = %d", b);
    c = a;
    a = b;
    b = c;
    printf("\nApos inverter os valores o resultado sera: a = %d", a);
    printf(" e b = %d", b);
    return 0;
}

