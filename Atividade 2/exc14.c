#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc14()
{
    int ht = 0;
    double vh = 0,
    INSS = 0,
    salLiq = 0,
    salBrut = 0,
    impRenda = 0;
    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%d", &ht);
    printf("Digite o valor da hora: R$");
    scanf("%lf", &vh);
    salBrut = ht * vh;
    INSS = salBrut * 0.11;
    if(salBrut-INSS <= 1257.12){
        impRenda = 0 * (salBrut - INSS) - 0;
        salLiq = salBrut - INSS - impRenda;
        printf("O valor a ser pago de salario eh: R$%.2lf", salLiq);
    }
    else if(salBrut-INSS >= 1257.13 && salBrut-INSS <= 2512.08){
        impRenda = 0.15 * (salBrut - INSS) - 188.57;
        salLiq = salBrut - INSS - impRenda;
        printf("O valor a ser pago de salario eh: R$%.2lf", salLiq);
    }
    else{
        impRenda = 0.275 * (salBrut - INSS) - 502.58;
        salLiq = salBrut - INSS - impRenda;
        printf("O valor a ser pago de salario eh: R$%.2lf", salLiq);
    }
    return 0;
}

