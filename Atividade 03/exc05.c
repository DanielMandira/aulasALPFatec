#include <stdio.h>
#include <stdlib.h>

int exc05()
{
    double celsius = 0;
    int fahrenheit = 0;

    while(fahrenheit < 50){
        fahrenheit++;
        celsius = 5.0 / 9 * (fahrenheit - 32);
        printf("\nA temperatura de %d fahrenheit ", fahrenheit);
        printf("em celsius eh: %lf", celsius);
    }
    return 0;
}

