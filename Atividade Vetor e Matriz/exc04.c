#include <stdio.h>
#include <stdlib.h>

int exc04(){
    double preco[] ={1.30, 2.60, 12.00},
        valorPago=0,
        troco=0;
    int quantidadeBilhetes = 0;
    printf("Digite o tipo de bilhete \n 1 -> para unitario \n 2 -> para duplo \n 3 -> para 10 viagens \n");
    int tipoBilhete;
    scanf("%d", &tipoBilhete);
  if (tipoBilhete >= 1 && tipoBilhete <= 3) {
        printf("Digite o valor pago pelo passageiro: ");
        scanf("%lf", &valorPago);
        quantidadeBilhetes = (int)(valorPago / preco[tipoBilhete - 1]);
        troco = valorPago - quantidadeBilhetes * preco[tipoBilhete - 1];
        printf("Quantidade de bilhetes possiveis: %d\n", quantidadeBilhetes);
        printf("Troco a ser devolvido: %.2lf\n", troco);
    } else {
        printf("Tipo de bilhete invalido. Escolha entre 1, 2 ou 3.\n");
    }

    return 0;
}

