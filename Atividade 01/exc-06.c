#include <stdio.h>
#include <stdlib.h>

int exc06()
{
   int aa;
   int an;
   printf("Calcule a idade\nDigite o ano de nascimento: ");
   scanf("%d",&an);
   printf("Digite o ano atual: ");
   scanf("%d",&aa);
   int idade = (aa-an);
   printf("\nSua idade eh: %d", idade);
   printf(" anos");
   return 0;
}

