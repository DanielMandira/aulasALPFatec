#include <stdio.h>
#include <stdlib.h>

int main()
{
    double desconto = 0.05;
    double valor;
    printf("Calcule o valor do Desconto: ");
    printf("\nDigite o valor: ");
    scanf("%lf", &valor);
    double vlDesconto = (valor * desconto);
    double vlFinal = (valor - vlDesconto);
    printf("\nO valor de desconto eh de: R$ %.2lf", vlDesconto);
    printf("\nO valor final sera de: R$ %.2lf", vlFinal);
   return 0;
}
