#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc13()
{
    double caixa = 0,
           pr = 0,
           vtCompra = 0,
           vtVista = 0,
           percent = 0,
           vtPrazo = 0;
    int qtd = 0;
    printf("Digite o total em caixa: R$");
    scanf("%lf", &caixa);
    printf("Digite o preco do produto: R$");
    scanf("%lf", &pr);
    printf("Digite a qunatidade comprada: ");
    scanf("%d", &qtd);
    vtCompra = pr * qtd;
    percent = vtCompra / caixa;
    if(percent > 0.8)
    {
        vtPrazo = vtCompra * 1.10;
        printf("A compra sera realizada a prazo \nO valor total da compra sera de: R$%.2lf", vtPrazo);
    }
    else
    {
        vtVista = vtCompra - (vtCompra * 0.1);
        printf("A compra sera realizada a vista \nO valor total da compra sera de: R$%.2lf",vtVista);
    }
    return 0;
}

