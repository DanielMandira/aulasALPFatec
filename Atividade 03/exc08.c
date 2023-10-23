#include <stdio.h>
#include <stdlib.h>

int exc08()
{
    int cont = 0,
        numero = 0,
    maiorValor = 0;

    while(cont < 20){
        cont++;
        printf("Digite o %dº numero: ",cont);
        scanf("%d", &numero);
        if(cont == 0 || numero > maiorValor){
            maiorValor = numero;
        }
    }
    printf("O maior valor digitado eh: %d ", maiorValor);
    return 0;
}
