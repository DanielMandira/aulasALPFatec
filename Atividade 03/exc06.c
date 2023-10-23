#include <stdio.h>
#include <stdlib.h>

int exc06()
{
   int h = 0,
   n = 0;

   printf("Digite o Valor de 'n': ");
   scanf("%d", &n);

    while(n >= 0){
        h = h + n;
        n--;
    }
        printf("\n o valor de 'h' eh: %d", h);
    return 0;
}

