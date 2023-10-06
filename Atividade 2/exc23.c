#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc23()
{
    char cs;
    double dc = 0;
    printf("Digite a cor do semaforo: \nV -> Vermelho \nA -> Amarelo \nD -> Verde\n");
    scanf("%c", &cs);
    cs = toupper(cs);
    switch(cs){
case 'V':
    printf("Voce deve parar!");
    break;
case 'A':
    printf("Digite a distancia do cruzamento: ");
    scanf("%lf", &dc);
    if(dc < 5){
        printf("Voce dever passar com cuidado!");
    }
    else{
        printf("Voce dever parar!");
    }
    break;
case 'D':
    printf("Voce pode passar!");
    break;
default:
    printf("Comando Invalido!");
    }

    return 0;
}

