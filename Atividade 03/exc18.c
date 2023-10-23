#include <stdio.h>
#include <stdlib.h>

int exc18()
{
   int cont = 0,
   n = 0,
   result = 0;
    printf("Digite O numero que deseja saber a tabuada: ");
    scanf("%d", &n);
   while(cont <= 10){
        result = n * cont;
        printf("\n%d X %d = %d",n, cont, result);
        cont++;
   }
    return 0;
}
