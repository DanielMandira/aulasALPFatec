#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc01()
{
    double cl;
    printf("Digite o valor da conta de luz: ");
    scanf("%lf", &cl);
    if(cl>50.00)
    {
        printf("Voce esta gastando muito!");
    }
    return 0;
}
