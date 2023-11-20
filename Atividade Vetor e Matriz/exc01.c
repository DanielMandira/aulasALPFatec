#include <stdio.h>
#include <stdlib.h>

int exc01()
{
    double peso[7]= {},
                    mediaIdade;
    int idade[7]= {},
                  tamanhoVetor= sizeof(peso) / sizeof(peso[0]),
                  totalIdade=0,
                  quantidadePessoas=0;

    for(int i = 0; i < tamanhoVetor; i++)
    {
        printf("\nDigite O peso da pessoa %d:", i + 1);
        scanf("%lf", &peso[i]);
        if(peso[i]>90)
        {
            quantidadePessoas += 1;
        }
        printf("Digite a idade da pessoa %d:", i + 1);
        scanf("%d", &idade[i]);
        totalIdade+=idade[i];

    }
    mediaIdade=(double)totalIdade/tamanhoVetor;
    printf("A quantidade de pessoas com mais de 90Kg eh de: %d", quantidadePessoas);
    printf("\nA media de idade eh de %.2lf", mediaIdade);
    return 0;
}

