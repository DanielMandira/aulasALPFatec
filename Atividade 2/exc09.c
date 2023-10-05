#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc09()
{
    double sal_novo = 0, sal = 0;
    printf("Digite seu salario: R$");
    scanf("%lf", &sal);
    if(sal < 500)
    {
        sal_novo = sal * 1.15;
        printf("O salario novo eh de: R$%.2lf", sal_novo);
    }
    else if(sal >= 500 && sal <= 1000)
    {
        sal_novo = sal * 1.10;
        printf("O salario novo eh de: R$%.2lf", sal_novo);
    }
    else if(sal > 1000)
    {
        sal_novo = sal * 1.05;
        printf("O salario novo eh de: R$%.2lf", sal_novo);
    }

    return 0;
}

