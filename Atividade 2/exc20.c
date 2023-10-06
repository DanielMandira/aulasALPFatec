#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc20()
{
    double a = 0,
           b = 0,
           c = 0;
    printf("Digite o valor dos lados do Triangulo \nLado A: ");
    scanf("%lf", &a);
    printf("Lado B: ");
    scanf("%lf", &b);
    printf("Lado C: ");
    scanf("%lf", &c);
    if(a == b && b==c)
    {
        printf("Este eh um triangulo equilatero, possui 3 lados iguais");
    }
    else if(a==b ^ a==c ^ b==c )
    {
        printf("Este eh um triangulo isoceles pois possui dois lados iguais");
    }
    else
    {
        printf("Este eh um triangulo escaleno pois nao possui nenhum lado igual");
    }
    return 0;
}

