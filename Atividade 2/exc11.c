#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc11()
{
    char cl;
    printf("Digite o Codigo do livro: ");
    scanf(" %c", &cl);
    cl = toupper(cl);
    switch(cl)
    {
    case 'A':
        printf("Categoria: Ficcao");
        break;
    case 'B':
        printf("Categoria: Nao-Ficcao");
        break;
    default:
        printf("Invalido!");
        break;
    }
    return 0;
}

