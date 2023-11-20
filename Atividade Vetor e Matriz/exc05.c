#include <stdio.h>
#include <stdlib.h>

int exc05(){
    double vetor[12],
        soma=0;
    int x=0,
        tamanhoVetor= sizeof(vetor) / sizeof(vetor[0]),
        y=0;

    printf("Digite os 12 valores do vetor:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Posicao %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }
    printf("Digite a posicao de X (entre 0 e 11): ");
    scanf("%d", &x);

    printf("Digite a posicao de Y (entre 0 e 11): ");
    scanf("%d", &y);
    if (x >= 0 && x < 12 && y >= 0 && y < 12) {
        soma = vetor[x] + vetor[y];
        printf("A soma dos valores nas posicoes %d e %d eh: %.2lf\n", x, y, soma);
    } else {
        printf("Posições invalidas. Certifique-se de que X e Y estao entre 0 e 11.\n");
    }
    return 0;
}
