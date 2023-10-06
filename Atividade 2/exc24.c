#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc24()
{
    int he = 0,
        me = 0,
        hs = 0,
        ms = 0,
        horasPermanecidas = 0,
        minutosPermanecidos = 0;
    const valorHora = 4;
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
    precoFinal = horasPermanecidas * valorHora;
    if(minutosPermanecidos != 0){
        precoFinal = precoFinal + valorHora;
        printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
    }
    else{
        printf("O valor do estacionameto eh de: R$%.2lf",precoFinal);
    }
    return 0;
}

