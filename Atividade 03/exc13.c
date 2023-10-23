#include <stdio.h>
#include <stdlib.h>

int exc13()
{
    int cont = 0,
        numero = 0,
    menorValor = 0;
char continuar;
   do{
        cont++;
        printf("Digite o %dº numero: ",cont);
        scanf("%d", &numero);
        if(cont == 1 || numero <menorValor){
            menorValor = numero;
        }
        printf("Deseja continuar? \n'S' -> Sim 'N' -> Nao\n");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
    }while(continuar == 'S');
    printf("O menor valor digitado eh: %d ", menorValor);
    return 0;
}

