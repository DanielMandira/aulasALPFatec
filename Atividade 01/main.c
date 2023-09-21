#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double valor, horaE, horaS, minE, minS, taxa;
    taxa = 0,066;
    printf("Calcule o valor do estacionamento\nDigite apenas a Hora de entrada 'Padrão 24h': ");
    scanf("%lf", &horaE);
    printf("Digite os minutos de entrada: ");
    scanf("%lf", &minE);
    printf("\nDigite apenas a Hora de saida 'Padrão 24h': ");
    scanf("%lf", &horaS);
    printf("Digite os minutos de saida: ");
    scanf("%lf", &minS);
    valor = ((((horaS - horaE)*4) + (minS-minE)* taxa));
    printf("O valor do estacionamento sera de: %0.2lf", valor);
    return 0;

}
