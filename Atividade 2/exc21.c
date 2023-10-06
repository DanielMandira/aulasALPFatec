#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
int exc21()
{
    int idade = 0;
    printf("Digite a idade do nadador: ");
    scanf("%d",&idade);
    if(idade >= 5 && idade <= 7){
        printf("Categoria: Infantil A");
    }
    else if(idade > 7 && idade <= 10){
        printf("Categoria: Infantil B");

    }
    else if(idade > 10 && idade <= 13){
        printf("Categoria: Juvenil A");

    }
    else if(idade > 13 && idade <= 17 ){
        printf("Categoria: Juvenil B");

    }
    else if(idade > 17){
        printf("Categoria: Adulto");

    }
    else{
        printf("Idade insuficiente!");
    }
    return 0;
}

