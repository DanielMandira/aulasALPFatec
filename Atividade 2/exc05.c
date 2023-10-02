#include <stdio.h>
#include <stdlib.h>

int exc05()
{
    int n = 0 , modulo = 0;
    printf("Digite um numero inteiro Positivo ou Negativo: ");
    scanf("%d", &n);
    modulo = abs(n);
    printf("O modulo do numero digitado eh: %d", modulo);
    return 0;
}

