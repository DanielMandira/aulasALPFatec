#include <stdio.h>
#include <stdlib.h>

int exc17()
{
    double largura = 0,
           comprimento = 0,
           areaTotal = 0;
    char continuar;
    do
    {

        printf("Digite o comprimento: ");
        scanf("%lf", &comprimento);
        printf("Digite a Largura: ");
        scanf("%lf", &largura);
        areaTotal= areaTotal+(comprimento*largura);
        printf("Deseja continuar? \n'S' -> Sim 'N' -> Nao\n");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
    }
    while(continuar == 'S');
    printf("A area total dos comodos eh: %.2lf m2",areaTotal);
    return 0;
}

