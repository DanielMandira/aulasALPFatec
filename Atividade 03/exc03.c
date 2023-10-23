#include <stdio.h>
#include <stdlib.h>

int exc03()
{
    double horasTrabDia = 0,
    horasTrabMes = 0;
    int cont = 0;
    printf("Digite as horas trabalhadas do Funcionario: ");
    while(cont < 30){
        cont++;
        printf("\nDia %d: ", cont);
        scanf("%lf", &horasTrabDia);
        horasTrabMes = horasTrabMes + horasTrabDia;
    }
    printf("O Total de horas trabalhadas no mes eh: %.2lf horas", horasTrabMes);

    return 0;
}

