#include <stdio.h>
#include <stdlib.h>

int exc02()
{
    double preco = 0,
           precoProd = 0,
           precoTotal = 0;
    int quant = 0,
        cont = 0;
    printf("Digite a quantidade e o preco de cada produto: \n");
    while(cont < 45 )
    {
        cont++;
        printf("\nProduto %d quantidade: ", cont);
        scanf("%d", &quant);
        printf("Produto %d preco: ",cont);
        scanf("%lf", &preco);
        precoProd = preco*quant;
        precoTotal = precoTotal + precoProd;
    }
    printf("O Total gasto foi de: R$ %.2lf ", precoTotal);
    return 0;
}
