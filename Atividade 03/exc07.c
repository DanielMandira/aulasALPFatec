#include <stdio.h>
#include <stdlib.h>

int exc07()
{
   int cont = 0,
   n = 0;
   double nFat = 1;
   printf("Digite o Valor que deseja Fatorar: ");
   scanf("%d", &n);
if(n >= 0){

    while(cont < n){
        cont++;
        nFat = nFat * cont;
    }
        printf("\nO valor de %d fatorial eh: %.2lf",n , nFat);
}
else{
    printf("Nao é permitido calcular o fatorial de numero negativo!!");
}
    return 0;
}

