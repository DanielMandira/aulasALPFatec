#include <stdio.h>
#include <stdlib.h>

int exc07()
{
    int tamanho = 0,
        contadorVogais = 0,
        contadorConsoantes = 0,
        eVogal = 0;
    char frase[tamanho + 1],
         vogal[] = {'a', 'e', 'i', 'o', 'u'};
    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);
    printf("Digite a palavra: ");
    scanf("%s", frase);
     for (int i = 0; frase[i] != '\0'; i++) {
        frase[i] = tolower(frase[i]);
        eVogal = 0;
        if (frase[i] >= 'a' && frase[i] <= 'z') {
            for (int j = 0; vogal[j] != '\0'; j++) {
                if (frase[i] == vogal[j]) {
                    eVogal = 1;
                    break;
                }
            }
            if (eVogal) {
                contadorVogais++;
            } else {
                contadorConsoantes++;
            }
        }
    }
    printf("Total de vogais: %d\n", contadorVogais);
    printf("Total de consoantes: %d\n", contadorConsoantes);
    return 0;
}

