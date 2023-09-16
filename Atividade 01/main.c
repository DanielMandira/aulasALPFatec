#include <stdio.h>
#include <stdlib.h>

int main()
{
    int L;
    int C;
    printf("Calcule a Area e o perimetro da Sala\nDigite a Largura: ");
    scanf("%d", &L);
    printf("\nDigite o Comprimento: ");
    scanf("%d", &C);
    int area = L * C;
    int perimetro = 2*(L+C);
    printf("\nA area da Sala eh: %d",area);
     printf(" m2");
     printf("\nO Preimetro da sala eh %d",perimetro);
   return 0;
}
