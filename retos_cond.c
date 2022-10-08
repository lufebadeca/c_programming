#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num1, num2, mayor;

    printf("Ingrese el primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d", &num2);
    if (num1>num2)
        printf("El primer numero, %d, es mayor que el segundo, %d y la diferencia es %d\n", num1, num2, num1-num2);
    else if(num2>num1)
        printf("El segundo numero, %d, es mayor que el primero, %d y la diferencia es %d\n", num2, num1, num2-num1);
    else
        printf("Los numeros ingresados son iguales\n");
    
    printf("Escribe tu animal favorito:\n");
    char choice[20];
    scanf("%s", &choice);

    if (strcasecmp(choice, "tortuga")==0)
        printf("Tambien me gustan las tortugas\n");
    else
        printf("%s es una opcion genial, pero prefiero las tortugas\n", choice);

    char lluvia[5];
    char viento[5];

    printf("¿Está lloviendo?: \n");
    scanf("%s",lluvia);

    if (strcasecmp(lluvia,"si")==0)
    {
        printf("¿Hay viento fuerte?: \n");
        scanf("%s",viento);
        if (strcasecmp(viento,"si")==0)
            printf("Hay mucho viento para salir con sombrilla.\n");
        else
            printf("Sal con una sombrilla.\n");   
    }
    else
        printf("Ten bonito dia.");
    
    int opc;

    do
    {
        printf("Ingresa un numero del 1 al 6.\n");
        scanf("%d", &opc);
    } while (opc < 1 || opc > 6);
    
    switch (opc)
    {
    case 1: printf("Hoy aprenderemos sobre programacion\n"); break;
    case 2: printf("¿Qué tal tomar un curso de marketing digital?\n"); break;
    case 3: printf("Hoy es un gran día para comenzar a aprender de diseño\n"); break;
    case 4: printf("¿Y si aprendemos algo de negocios online?\n"); break;
    case 5: printf("Veamos un par de clases sobre producción audiovisual\n"); break;
    case 6: printf("Tal vez sea bueno desarrollar una habilidad blanda en Platzi\n"); break;
    
    default: printf("Ingrese una opcion vaLIDA"); break;
    }


    return 0;
}
