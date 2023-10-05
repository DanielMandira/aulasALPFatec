#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc12()
{
    double t = 0;
    printf("Digite a temperatura do termometro: ");
    scanf("%lf",&t);
    if(t < 100)
    {
        printf("Temperatura muito baixa!");
    }
    else if(t >= 100 && t <=200)
    {
        printf("Temperatura baixa!");
    }
    else if(t > 200 && t < 500)
    {
        printf("Temperatura normal!");
    }
    else
    {
        printf("Temperatura muito alta!");
    }
    return 0;
}

