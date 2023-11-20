#include <stdio.h>
#include <stdlib.h>

int exc03(){
    char sexos[12];
    int idades[12],totalMulheres = 0,
        totalHomens = 0,
         tamanhoVetor= sizeof(sexos) / sizeof(sexos[0]),
        somaIdadeMulheres = 0,
        somaIdadeHomens = 0;
    double mediaIdadeHomens = 0,
        mediaIdadeMulheres =0;

    for (int i = 0; i < tamanhoVetor; i++){
        printf("\nDigite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite o sexo da pessoa %d \n 'M' -> Masculino \n 'F' -> Feminino", i + 1);
        scanf(" %c", &sexos[i]);
        sexos[i] = toupper(sexos[i]);
        if (sexos[i] == 'F'){
            somaIdadeMulheres += idades[i];
            totalMulheres++;
        }
        else if (sexos[i] == 'M'){
            somaIdadeHomens += idades[i];
            totalHomens++;
        }
        else{
            printf("Sexo inválido. Digite M ou F.\n");
            i--;
        }
    }
    mediaIdadeMulheres = (double)somaIdadeMulheres / totalMulheres;
    mediaIdadeHomens = (double)somaIdadeHomens / totalHomens;
    printf("Idade média das mulheres: %.2f\n", mediaIdadeMulheres);
    printf("Idade média dos homens: %.2f\n", mediaIdadeHomens);
    return 0;
}

