#include <stdio.h>
#include <stdlib.h>

int exc15()
{
    int cont = 0,
        numero = 0;
    double result = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero >= 0)
    {
        result = numero % 2;
        if(result == 0)
        {
            printf("O numero eh par!");
        }
        else
        {
            printf("O numero eh impar!");
        }
    }
    else
    {
        printf("Numeros negativos nao suportados!");
    }
    return 0;
}

