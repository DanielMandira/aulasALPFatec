#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc19()
{
    int diaNasc = 0,
        mesNasc = 0,
        anoNasc = 0,
        diaHoje = 0,
        mesHoje = 0,
        anoHoje =0,
        idadeAno = 0,
        idadeMes = 0,
        idadeDia = 0;
    printf("Digite sua data de nascimento \nDN: ");
    scanf("%d", &diaNasc);
    printf("MN: ");
    scanf("%d", &mesNasc);
    printf("AN: ");
    scanf("%d", &anoNasc);
    printf("Digite a data de hoje \nDH: ");
    scanf("%d", &diaHoje);
    printf("MH: ");
    scanf("%d", &mesHoje);
    printf("AH: ");
    scanf("%d", &anoHoje);
    idadeAno = anoHoje - anoNasc;
    idadeMes = mesHoje - mesNasc;
    idadeDia = diaHoje - diaNasc;
    if(idadeMes < 0)
    {
        idadeAno = idadeAno - 1;
        if(idadeDia<0)
        {
            idadeMes = 12 + idadeMes;
            idadeDia = 31 + idadeDia;
            printf("Sua idade real eh: %d anos, %d meses e %d dias", idadeAno, idadeMes, idadeDia);
        }
        else if(idadeDia == 0)
        {
            idadeMes = 12 + idadeMes;
            printf("Sua idade real eh: %d anos, %d meses e %d dias", idadeAno, idadeMes, idadeDia);
        }
        else
        {
            idadeMes = 12 + idadeMes;
            printf("Sua idade real eh: %d anos, %d meses e %d dias", idadeAno, idadeMes, idadeDia);
        }
    }
    else
    {
        if(idadeDia < 0)
        {
            idadeMes = idadeMes - 1;
            idadeDia = 31 + idadeDia;
            printf("Sua idade real eh: %d anos, %d meses e %d dias", idadeAno, idadeMes, idadeDia);
        }
        else
        {
            printf("Sua idade real eh: %d anos, %d meses e %d dias", idadeAno, idadeMes, idadeDia);
        }
    }
    return 0;
}
