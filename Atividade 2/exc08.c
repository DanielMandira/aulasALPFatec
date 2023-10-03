#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc08()
{
    char nf[30];
    char dep;
    double sal = 0;
    printf("Digite o nome do funcionario: ");
    scanf("%s", &nf);
    printf("Digite o Departamento do Funcionario: \nP -> Producao\nE -> Engenharia\n");
    scanf(" %c", &dep);
    dep = toupper(dep);
    printf("Digite o Salario do Funcioanrio: R$");
    scanf("%lf", &sal);
    if(sal>=1000 && sal <=1500){
        switch(dep){
        case 'P':
            printf("Nome: %s", nf);
            printf("\nDepartamento: Producao \nSalario: %.2lf", sal);
            break;
        case 'E':
            printf("Nome: %s", nf);
            printf("\nDepartamento: Engenharia \nSalario: %.2lf", sal);
            break;
        default:
            printf("Departamento Invalido!");
            break;
        }
    }
    else{
        printf("Salario fora dos paramentros!");
    }
    return 0;
}

