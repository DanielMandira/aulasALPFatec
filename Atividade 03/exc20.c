#include <stdio.h>
#include <stdlib.h>

int exc20()
{
    double horaTrab = 0,
           valorHora = 0,
           salarioBruto=0,
           salarioLiq = 0,
           inss = 0,
           impRenda;
    int cont = 0;
    char opcao;

    do
    {
        cont++;
        printf("\nFuncionario %d: ",cont);
        printf("\nDigite a quantidade de Horas Trabalhadas: ");
        scanf("%lf", &horaTrab);
        if(horaTrab <= 0)
        {
            printf("Quantidade de horas invalida!!");
            cont--;
        }
        else
        {

            printf("Digite o valor da hora: "),
                   scanf("%lf", &valorHora);
            if(valorHora <= 0)
            {
                printf("Valor da hora Invalido!!");
                cont--;
            }
            else
            {

                salarioBruto = valorHora*horaTrab;
                inss = salarioBruto * 0.11;
                if(salarioBruto-inss<=900)
                {
                    impRenda = 0;
                    salarioLiq = salarioBruto - inss - impRenda;
                    printf("\nO Salario Liquido do funcionario %d eh de R$%.2lf", cont, salarioLiq);

                }
                else if(salarioBruto - inss > 900 && salarioBruto <= 1800)
                {
                    impRenda = 135;
                    salarioLiq = salarioBruto - inss - impRenda;
                    printf("\nO Salario Liquido do funcionario %d eh de R$%.2lf", cont, salarioLiq);
                }
                else
                {
                    impRenda = 360;
                    salarioLiq = salarioBruto - inss - impRenda;
                    printf("\nO Salario Liquido do funcionario %d eh de R$%.2lf", cont, salarioLiq);
                }
            }
        }
                printf("\n\nDeseja Continuar?\n 'S' -> Sim \n 'N' -> Nao\n");
                scanf(" %c", &opcao);
                opcao=toupper(opcao);
    }
    while(opcao == 'S');
    return 0;
}
