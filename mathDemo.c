#include <stdio.h>
#include <math.h>

int x;
float xRad, sinResult;

const float PI = 3.14159269;

int main()
{
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    xRad = x*PI/180;
    printf("El valor de %d en radianes es %f \n", x, xRad);
    sinResult = sin(xRad);
    printf("El seno de %d es %f", x, sinResult);
}
