#include <stdio.h>
#include <stdlib.h>

int exc23()
{
   double novoSal = 0,
   reajuste = 0,
   salAtual = 0,
   totalAtual = 0,
   totalFinal = 0,
   gastosAMais =0;
   int cont = 0;
   do{
        cont++;
    printf("\nFuncionario %d: \nDigite o valor do salario atual: R$",cont);
    scanf("%lf", &salAtual);
    if(salAtual < 0){
        printf("Salario Invalido!");
    }
    else if(salAtual == 0){
        printf("Salario Invalido!!");
        cont--;
    }
    else{
    totalAtual = totalAtual + salAtual;
    if(salAtual <= 500){
        reajuste=1.15;
    }
    else if(salAtual > 500 && salAtual<=1000){
        reajuste=1.10;
    }
    else{
        reajuste=1.05;
    }
    novoSal = salAtual * reajuste;
    totalFinal = totalFinal + novoSal;
    printf("O novo salario do funcionario %d sera de R$%.2lf", cont, novoSal);
    }

   }
    while(salAtual >= 0);
    gastosAMais = totalFinal - totalAtual;
    printf("Operacao encerrada!\nA empresa gastara R$%.2lf a mais com os novos reajustes", gastosAMais);

    return 0;
}


