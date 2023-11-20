#include <stdio.h>
#include <stdlib.h>

int exc02()
{
    double peso[10]= {},
    altura[10]= {},
    percentJovens=0,
    mediaIdade;
    int idade[10]= {},
    tamanhoVetor= sizeof(peso) / sizeof(peso[0]),
    totalIdade=0,
    pessoasJoves=0,
    pessoasAcimaPeso=0;

    for(int i = 0; i < tamanhoVetor; i++)
    {
        printf("\nDigite o peso da pessoa %d:", i + 1);
        scanf("%lf", &peso[i]);
        printf("\nDigite a altura da pessoa %d:", i + 1);
        scanf("%lf", &altura[i]);
        if(peso[i]>90 && altura[i] < 1.50)
        {
            pessoasAcimaPeso += 1;
        }
        printf("Digite a idade da pessoa %d:", i + 1);
        scanf("%d", &idade[i]);
        totalIdade+=idade[i];
        if(idade[i]>=10 && idade[i] <=30 && altura[i]>1.90){
            pessoasJoves += 1;
        }
    }

    mediaIdade=totalIdade/tamanhoVetor;
    percentJovens = ((double)pessoasJoves/tamanhoVetor) * 100;
    printf("A quantidade de pessoas com mais de 90Kg e menor de 1.50 de altura eh de: %d", pessoasAcimaPeso);
    printf("\nA media de idade eh de %.2lf", mediaIdade);
    printf("\nA porcentagem de pessoas com idade entre 10 e 30 anos com mais de 1.90 eh de: %.2lf%%", percentJovens);
    return 0;
}

