#include <stdio.h>
#include <stdlib.h>

int exc01()
{
    double pesoCaixa = 0,
           pesoTotal = 0;
    int cont = 0;
    printf("Digite o peso das Caixas: \n");
    while(cont < 25 ){
        cont++;
        printf("Caixa %d: ",cont);
        scanf("%lf", &pesoCaixa);
        pesoTotal = pesoTotal + pesoCaixa;
    }
    printf("O peso Total sera de: %.2lf Kg", pesoTotal);


    return 0;
}

