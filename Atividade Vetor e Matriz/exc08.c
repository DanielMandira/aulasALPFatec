#include <stdio.h>
#include <stdlib.h>

int exc08() {
    int tamanho = 0;
    char temp;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    char *frase = (char *)malloc((tamanho + 1) * sizeof(char));

    printf("Digite a palavra: ");
    scanf("%s", frase);

    for (int i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = frase[i];
        frase[i] = frase[j];
        frase[j] = temp;
    }

    printf("String invertida: %s\n", frase);
    free(frase);
    return 0;
}

