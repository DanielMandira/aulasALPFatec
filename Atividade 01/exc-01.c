#include <stdio.h>
#include <stdlib.h>

int exc01()
{
    int l;
    int c;
    printf("Calcule a Area da sala\nDigite a Largura: ");
    scanf("%d", &l);
    printf("\nDigite o Comprimento: ");
    scanf("%d", &c);
    int area = l * c;
    printf("\nA area da Sala eh: %d",area);
     printf(" m2");
   return 0;
}
