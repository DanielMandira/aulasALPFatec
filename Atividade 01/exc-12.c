#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int exc12()
{
    double a, b, c, d;
    a = 2;
    b = 4;
    c = ((a+b)*b);
    d = (c*b/(a * a));
    a = (d/(c + b));
    b = (b+a);
    printf("\nA Variavel A vale: %0.2lf", a);
    printf("\nA Variavel B vale: %0.2lf", b);
    printf("\nA Variavel C vale: %0.2lf", c);
    printf("\nA Variavel D vale: %0.2lf", d);
    return 0;
}

