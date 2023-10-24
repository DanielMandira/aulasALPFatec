#include <stdio.h>
#include <stdlib.h>

int exc22()
{
    int cont = 0,
    quantidade = 0;
    double caixa = 0,
    preco = 0,
    valorTotal = 0,
    valorFinal = 0;
        printf("Digite o valor do caixa da empresa: ");
        scanf("%lf", &caixa);
    do{
        cont++;
        printf("\nProduto %d: ",cont);
        printf("\nDigite a Quantidade comprada: ");
        scanf("%d", &quantidade);
        if(quantidade < 0){
            printf("\nQuantidade Invalida!!");
        }
        else{
            printf("Digite O valor do produto: ");
            scanf("%lf", &preco);
            if(preco < 0){
                printf("Valor de compra Invalido!!");
                cont--;
            }
            else{
                valorTotal = valorTotal + (preco*quantidade);
            }
        }
    }while(quantidade>=0);
    if(valorTotal > caixa*0.8){
        valorFinal = valorTotal * 1.10;
        printf("\nA compra deve ser realizada da segunte Forma: \n A prazo em 3x com Juros de 10%%");
        printf("\n Valor Total de compra: R$%.2lf \n Valor Juros: 10%% \n Valor Final: R$%.2lf", valorTotal, valorFinal);
    }
    else{
        valorFinal = valorTotal * 0.05;
        printf("\nA compra deve ser realizada da segunte Forma: \n A vista com Desconto de 5%% ");
        printf("\n\n  Valor Total de compra: R$%.2lf \n  Valor Desconto: 5%% \n  Valor Final: R$%.2lf", valorTotal, valorFinal);
    }

    return 0;
}


