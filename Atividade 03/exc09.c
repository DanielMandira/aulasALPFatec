#include <stdio.h>
#include <stdlib.h>

int exc09()
{
    int cont = 0,
        numero = 0,
    menorValor = 0;

    while(cont < 20){
        cont++;
        printf("Digite o %dº numero: ",cont);
        scanf("%d", &numero);
        if(cont == 1 || numero < menorValor){
            menorValor = numero;
        }
    }
    printf("O menor valor digitado eh: %d ", menorValor);
    return 0;
}
