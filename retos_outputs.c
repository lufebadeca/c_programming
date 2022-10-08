#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[20];
char lastName[20];

int main(int argc, char const *argv[])
{   

    printf("Please, type your name: ");
    gets(name);
    printf("Please, type your last name: \n");
    gets(lastName);
    printf("Your full name is %s %s\n", name, lastName);

    printf("Platzi courses categories:\n");
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("category%d\n", i);
    }
    printf("Platzi courses categories:\n");
    
    int num1, num2;
    float result;

    int dias, horas, minutos, segundos;
    printf("Ingrese un numero de dias para hacer el conteo...\n");
    scanf("%d", &dias);
    horas = dias*24;
    minutos = horas*60;
    segundos = minutos*60;
    printf("En %d dias hay %d horas, %d minutos y %d segundos\n", dias, horas, minutos, segundos);
    
    printf("Ingrese un numero mayor a 1000\n");
    scanf("%d", &num1);
    printf("Ingrese un numero menor a 100\n");
    scanf("%d", &num2);

    result = (float)num1/num2;

    printf("El numero %d cabe %f veces en el numero %d\n", num2, result, num1);

    return 0;
}
