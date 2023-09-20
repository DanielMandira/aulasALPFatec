#include <stdio.h>
#include <stdlib.h>

int main()
{
    double r;
    double pi = 3.14159;
    printf("Calcule o volume da esfera\nDigite o valor do raio: ");
    scanf("%lf",&r);
    double vol = (pi* pow(2,r));
    printf("\nO volume da esfera eh de: %.2lf", vol);
    printf("metros cubicos");
    return 0;
}
