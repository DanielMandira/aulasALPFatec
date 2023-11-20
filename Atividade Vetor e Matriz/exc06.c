#include <stdio.h>
#include <stdlib.h>

int exc06(){
    int vetor[20],
        tamanhoVetor= sizeof(vetor) / sizeof(vetor[0]),
        valorX = 0,
        posicaoEncontrada = -1;

    printf("Digite os 20 valores do vetor:\n");
    for (int i = 0; i < tamanhoVetor; i++) {
        printf("Posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Digite o valor X a ser buscado: ");
    scanf("%d", &valorX);
    for (int i = 0; i < 20; i++) {
        if (vetor[i] == valorX) {
            posicaoEncontrada = i;
            break;
        }
    }
    if (posicaoEncontrada != -1) {
        printf("O valor %d foi encontrado na posicao %d do vetor.\n", valorX, posicaoEncontrada);
    } else {
        printf("O valor %d nao foi encontrado no vetor.\n", valorX);
    }
    return 0;
}

