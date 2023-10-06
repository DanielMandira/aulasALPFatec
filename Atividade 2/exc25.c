#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc25()
{
    int he = 0,
        me = 0,
        hs = 0,
        ms = 0,
        horasPermanecidas = 0,
        minutosPermanecidos = 0;
    double precoFinal = 0;
    printf("Digite a Hora de Entrada: \nHoras: ");
    scanf("%d", &he);
    printf("Minutos: ");
    scanf("%d",&me);
    printf("Digite a Hora de Saida: \nHoras: ");
    scanf("%d", &hs);
    printf("Minutos: ");
    scanf("%d",&ms);

    horasPermanecidas = hs - he;
    minutosPermanecidos = ms - me;
    minutosPermanecidos = abs(minutosPermanecidos);
    if(horasPermanecidas == 1)
    {

        precoFinal = 4;
        if(minutosPermanecidos != 0)
        {
            precoFinal = precoFinal + 2;
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
        }
        else
        {
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
        }
    }
    else if(horasPermanecidas == 2)
    {
         precoFinal =6;
        if(minutosPermanecidos != 0)
        {
            precoFinal = precoFinal + 1;
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
        }
        else
        {
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
        }
    }
    else if(horasPermanecidas > 2){

            precoFinal = 6 + (horasPermanecidas - 2);
        if(minutosPermanecidos != 0)
        {
            precoFinal = precoFinal + 1;
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
        }
        else
        {
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
        }
    }
    else{
        precoFinal = 4;
            printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
    }
    return 0;
}

