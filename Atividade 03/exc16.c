#include <stdio.h>
#include <stdlib.h>

int exc16()
{
    double altAnacleto = 1.50,
        altFelisberto = 1.10;
        int cont = 0;
        do{
            cont++;
            altAnacleto = altAnacleto + 0.02;
            altFelisberto = altFelisberto + 0.03;
        }while(altAnacleto > altFelisberto);
        printf("Levam %d anos para Felizberto ficar maior que Anacleto", cont);

    return 0;
}

