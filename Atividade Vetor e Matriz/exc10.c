#include <stdio.h>
#include <stdlib.h>

int exc10(){
    int N = 0,
    valorProcurado = 0,
    encontrado = 0;

    printf("Digite o valor de N (tamanho da matriz): ");
    scanf("%d", &N);

    int matriz[N][N];

    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &matriz[i][j]);

    printf("Digite o valor a ser procurado na matriz: ");
    scanf("%d", &valorProcurado);

    for (int i = 0; i < N && !encontrado; i++)
        for (int j = 0; j < N; j++)
            if (matriz[i][j] == valorProcurado) {
                encontrado = 1;
                break;
            }

    printf(encontrado ? "Valor encontrado na matriz.\n" : "Valor nao encontrado na matriz.\n");

    return 0;
}

