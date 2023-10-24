#include <stdio.h>
#include <stdlib.h>

int teste(){
    int cont = 0,
        formaPag=0,
        quantidadeComprada = 0;
    double valorEtiqueta = 0,
           valorTotal=0,
           valorFinal=0;
    char opcao;
    do
    {
        cont++;
        printf("\nProduto %d:",cont);
        printf("\nDigite o preco da etiqueta: ");
        scanf("%lf", &valorEtiqueta);
        if(valorEtiqueta<0)
        {
            printf("Valor Invalido!");
            cont--;
        }
        else
        {

            printf("Digite a quantidade comprada: ");
            scanf("%d", &quantidadeComprada);
            if(quantidadeComprada<=0)
            {
                printf("Quantidade Invalida!");
                cont--;
            }
            else
            {
                valorTotal=valorTotal+(valorEtiqueta*quantidadeComprada);
            }
        }

        printf("\n\nDeseja Continuar?\n 'S' -> Sim \n 'N' -> Nao\n");
        scanf(" %c", &opcao);
        opcao=toupper(opcao);
    }
    while(opcao == 'S');
    do
    {
        printf("Compra Finalizada! Selecione a Forma de Pagamento: \n 1 -> A Vista, Dinheiro/Cheque c/ 10%% off \n 2 -> A Vista, Cartao credito c/ 5%% off \n 3 -> 2x sem juros \n 4 -> 3x com 10%% de juros");
        scanf("\n%d", &formaPag);
        switch(formaPag)
        {
        case 1:
            valorFinal = valorTotal - (valorTotal*0.10);
            printf("\nO valor final da compra eh de: R$%.2lf",valorFinal);
            break;
        case 2:
            valorFinal = valorTotal - (valorTotal*0.05);
            printf("\nO valor final da compra eh de: R$%.2lf",valorFinal);
            break;
        case 3:
            valorFinal = valorTotal;
            printf("\nO valor final da compra eh de: R$%.2lf",valorFinal);
            break;
        case 4:
            valorFinal = valorTotal*1.10;
            printf("\nO valor final da compra eh de: R$%.2lf",valorFinal);
            break;
        default:
            printf("\nComando Invalido! TENTE NOVAMENTE");
            break;
        }
    }
    while(formaPag == 0 || formaPag > 4);
    return 0;
}

