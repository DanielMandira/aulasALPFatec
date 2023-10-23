#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 0,
        totalIdade = 0,
        cont=0,
        a = 0,
        b = 0,
        c = 0,
        d = 0,
        e = 0;
    double mediaIdade = 0,
           percentA = 0,
           percentB = 0,
           percentC = 0,
           percentD = 0,
           percentE = 0;
    char opniao;
    do
    {
        printf("\nDigite a idade do entrevistado: ");
        scanf("%d",&idade);
        if(idade <=0 )
        {
            printf("Idade inexistente!!");
        }
        else
        {

            totalIdade = totalIdade + idade;
            printf("Digite a opniao sobre o filme: \n'A' -> OTIMO\n'B' -> BOM\n'C' -> REGULAR\n'D' -> RUIM\n'E' -> PESSIMO\n");
            scanf(" %c", &opniao);
            opniao=toupper(opniao);
            switch(opniao)
            {
            case 'A':
                a=a+1;
                break;
            case 'B':
                b=b+1;
                  break;
            case 'C':
                c=c+1;
                  break;
            case 'D':
                d=d+1;
                  break;
            case 'E':
                e=e+1;
                  break;
            default:
                printf("Comando Invalido!!");
                cont--;
                totalIdade = totalIdade - idade;
                break;
            }
            cont++;
        }
    }
    while(idade > 0);
    mediaIdade = totalIdade / (cont - 0.0);
    percentA = (a / (cont - 0.0))*100;
    percentB = (b / (cont - 0.0))*100;
    percentC = (c / (cont - 0.0))*100;
    percentD = (d / (cont - 0.0))*100;
    percentE = (e / (cont - 0.0))*100;
    printf("\nUm total de %d pessoas responderam a pesquisa\n", cont);
    printf("A media de idades eh de: %.2lf anos\n", mediaIdade);
    printf("O resultados seguem da seguinte maneira \nOtimo: %.2lf%%\nBom: %.2lf%%\nRegular: %.2lf%%\nRuim: %.2lf%%\nPessimo: %.2lf%%0", percentA, percentB, percentC, percentD, percentE);

    return 0;
}
