#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc22()
{
    int cp = 0;
    printf("Digite o codigo do produto: ");
    scanf("%d", &cp);
    if(cp == 1)
    {
        printf("Alimento nao perecivel");
    }
    else if(cp >= 2 && cp <= 4)
    {
        printf("Alimento perecivel");
    }
    else if(cp >=5 && cp <=6)
    {
        printf("Vestuario");
    }
    else if (cp == 7)
    {
        printf("Higiene pessoal");
    }
    else if(cp >= 8 && cp <= 9)
    {
        printf("Limpeza e Utensilios Domesticos");
    }
    else
    {
        printf("Invalido!");
    }
    return 0;
}

