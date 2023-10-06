#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc18()
{
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    int anoNasc = 0,
        idade = 0,
        anoAtual = local->tm_year+1900;
    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &anoNasc);
    idade = anoAtual - anoNasc;
    if(idade >= 16)
    {
        printf("Voce ja pode votar!\n");
        if(idade >= 18)
        {
            printf("Voce ja pode tirar a carteira de habilitacao!\n");
        }
        else
        {
            printf("Voce não tem idade para tirar a carteira de habilitacao\n");
        }
    }
    else
    {
        printf("Voce não tem idade para tirar habilitacao e nem votar!");
    }
    return 0;
}

