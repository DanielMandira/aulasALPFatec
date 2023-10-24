
#include <stdio.h>
#include <stdlib.h>

int exc04()
{
    double horasTrabDia = 0,
    horasTrabMes = 0,
    salarioBruto = 0;
    int cont = 0;
    printf("Digite as horas trabalhadas do Funcionario: ");
    while(cont < 30){
        cont++;
        printf("\nDia %d: ", cont);
        scanf("%lf", &horasTrabDia);
        horasTrabMes = horasTrabMes + horasTrabDia;
    }
    salarioBruto = horasTrabMes * 10;
    printf("O salario Bruto do mes eh: R$ %.2lf ", salarioBruto);

    return 0;
}

