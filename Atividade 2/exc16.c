#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc16()
{
    double pe = 0,
           taxa = 0,
           vlFinal = 0;
    int cp = 0;
    printf("Digite o preco da etiqueta: R$");
    scanf("%lf", &pe);
    printf("Digite a condicao de pagamento: \n1 -> A vista no dinheiro com 10%% desconto \n2 -> A vista no credito com 5%% desconto \n3 -> 2x sem juros \n4 -> 3x com 10%% acrescimo\n");
    scanf("%d", &cp);
    switch(cp)
    {
    case 1:
        taxa = pe * 0.10;
        vlFinal = pe - taxa;
        printf("O valor a ser pago eh de: R$%.2lf", vlFinal);
        break;
    case 2:
        taxa = pe * 0.05;
        vlFinal = pe - taxa;
        printf("O valor a ser pago eh de: R$%.2lf", vlFinal);
        break;
    case 3:
        printf("O valor a ser pago eh de: R$%.2lf", pe);
        break;
    case 4:
        taxa = pe * 0.10;
        vlFinal = pe + taxa;
        printf("O valor a ser pago eh de: R$%.2lf", vlFinal);
        break;
    default:
        printf("Comando Invalido!");
        break;
    }

    return 0;
}

