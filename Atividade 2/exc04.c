#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc04()
{
    double vg = 0,
           ct = 0;
    char tc;
    printf("Digite a capacidade do tanque 'em litros' do carro: ");
    scanf("%lf", &ct);
    printf("Digite o tipo de combustivel do carro: \n'G' -> Gasolina \n'A' -> Alcool\n");
    scanf("%s", &tc);
    tc = toupper(tc);
    switch(tc)
    {
    case 'G':
        vg = ct*1.80;
        printf("O valor gasto de gasolina eh: %.2lf", vg);
        break;
    case 'A':
        vg = ct * 1.00;
        printf("O valor gasto de alcool eh: %.2lf", vg);
        break;
    default:
        printf("Comando Invalido!");
        break;

    }
    return 0;
}
