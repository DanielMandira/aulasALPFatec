#include <stdio.h>
#include <stdlib.h>

int exc12()
{
    int cont = 0,
        numero = 0,
    maiorValor = 0;

   do{
        cont++;
        printf("Digite o %dº numero: ",cont);
        scanf("%d", &numero);
        if(numero > maiorValor){
            maiorValor = numero;
        }
    }while(numero >= 0);
    printf("O maior valor digitado eh: %d ", maiorValor);
    return 0;
}

