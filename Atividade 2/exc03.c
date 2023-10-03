#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int exc03()
{
    double h = 0, p = 0;
    char s;

    printf("Digite a altura: ");
    scanf("%lf", &h);
    printf("Digite o Sexo\n'F' -> Feminino\n'M' -> Masculino\n");
    scanf("%s",&s);
    s = toupper(s);
    switch(s){
    case 'F':
        p=(62.1*h)-44.7;
        printf("O peso ideal do sexo feminino para sua altura eh: %.2lf",p);
        break;
    case 'M':
        p=(72.7*h)-58;
        printf("O peso ideal do sexo masculino para sua altura eh: %.2lf",p);
        break;
    default:
        printf("Comando Invalido!");
        break;

    }
    return 0;
}
