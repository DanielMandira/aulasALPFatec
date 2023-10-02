#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exc08()
{
    double valor, horaE, horaS, minE, minS, taxa;
    taxa = 4;
    printf("Calcule o valor do estacionamento\nDigite apenas a Hora de entrada 'Padrao 24h': ");
    scanf("%lf", &horaE);
    printf("Digite os minutos de entrada: ");
    scanf("%lf", &minE);
    printf("\nDigite apenas a Hora de saida 'Padrao 24h': ");
    scanf("%lf", &horaS);
    printf("Digite os minutos de saida: ");
    scanf("%lf", &minS);
    if(horaS == 00){
        horaS = 24;
        valor = ((((minS/60)+horaS)-((minE/60)+horaE))*taxa);
        printf("O valor do estacionamento sera de: %0.2lf", valor);
    }
    else{
        valor = ((((minS/60)+horaS)-((minE/60)+horaE))*taxa);
        printf("O valor do estacionamento sera de: %0.2lf", valor);

    }
    return 0;

}
