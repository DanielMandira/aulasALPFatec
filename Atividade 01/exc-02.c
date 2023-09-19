#include <stdio.h>
#include <stdlib.h>

int exc02()
{
    int l;
    int c;
    printf("Calcule a Area e o perimetro da Sala\nDigite a Largura: ");
    scanf("%d", &l);
    printf("\nDigite o Comprimento: ");
    scanf("%d", &c);
    int area = l * c;
    int perimetro = 2 *(l+c);
    printf("\nA area da Sala eh: %d",area);
     printf(" m2 \n");
     printf("\nO Perimetro da sala eh: %d",perimetro);
     printf(" Metros \n");
   return 0;
}
