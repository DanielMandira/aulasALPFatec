#include <stdio.h>
#include <stdlib.h>

int exc07()
{
    double vm = 0;
    char nome[10]= "";
    printf("Digite o nome do vendedor: ");
    scanf("%s", &nome);
    printf("Digite o valor de venda do mes: R$");
    scanf("%lf",&vm);
    if(vm>=10000 && vm<=50000){
        printf("%s", nome);
    }
    return 0;
}

