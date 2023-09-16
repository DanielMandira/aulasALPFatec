#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L;
    int C;
    printf("Calcule a Area da sala\nDigite a Largura: ");
    scanf("%d", &L);
    printf("\nDigite o Comprimento: ");
    scanf("%d", &C);
    int soma = L * C;
    printf("\nA area da Sala eh: %d",soma);
     printf(" m2");
   return 0;
}
