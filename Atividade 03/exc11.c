#include <stdio.h>
#include <stdlib.h>

int exc11()
{
    int num=0,
    sum=0,
    cont = 0;
    double med=0;

    do{
            cont++;
        printf("Digite o %dº valor: ",cont);
    scanf("%d", &num);
    if(num >= 0){
    sum = sum+num;
    }
    }while(num>=0);
    med = sum / (cont-1.0);
    printf("A soma da sequencia eh: %d \nE a media eh: %.2lf",sum,med);
    return 0;
}

