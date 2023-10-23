#include <stdio.h>
#include <stdlib.h>

int exc10()
{
     double preco = 1,
           precoProd = 0,
           precoTotal = 0;
    int quant = 1,
        cont = 0;
    char continuar;
    printf("Digite a quantidade e o preco de cada produto: \n");
    do
    {
        cont++;
        do
        {
            printf("\nProduto %d quantidade: ", cont);
            scanf("%d", &quant);
            if(quant < 0)
            {
                printf("Quantidade invalida, insira valores Positivos!");
            }
        }
        while(quant < 0);
            do
            {
                printf("Produto %d preco: ",cont);
                scanf("%lf", &preco);
                if(preco < 0)
                {
                    printf("Preco invalido, insira precos Positivos!");
                }
            }
        while(preco < 0);
        precoProd = preco*quant;
        precoTotal = precoTotal + precoProd;
        printf("\nContinuar? \n'S' -> Sim\n'N' -> Nao\n");
        scanf(" %c", &continuar);
        continuar = toupper(continuar);
    }
    while(continuar == 'S');
    printf("O Total gasto foi de: R$ %.2lf ", precoTotal);
    return 0;
}
