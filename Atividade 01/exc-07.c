#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exc07()
{
    double r;
    double pi = 3.14159;
    printf("Calcule o volume da esfera\nDigite o valor do raio em CM: ");
    scanf("%lf",&r);
    double vol = (4 * pi * pow(r,3)/3);
    printf("\nO volume da esfera eh de: %.2lf", vol);
    printf(" cm3");
    return 0;
}
