#include <stdio.h>
#include <stdlib.h>
int opt1;
int opt2;
int d;

int main(){
    system("cls");
    do
    {
        system("color 9F");

        //printf("opt1 es %d \n", opt1);
        printf("Bienvenido a platzi store:\n");
        printf("Opcion 0 para platzi bebidas \n");
        printf("Opcion 1 para platzi comidas \n");
        printf("Opcion 2 para platzi postres \n");
        scanf("%d", &opt1);
        //printf("opt1 es %d \n", opt1);

        if(opt1 == 0)
        {
            printf("Usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
            printf("Opcion 0 para platzi cola cero \n");
            printf("Opcion 1 para platzi cola normal \n");
            printf("Opcion 2 para platzi pina colada \n");
            printf("Opcion 3 para platzi limonada de coco \n");
            scanf("%d", &opt2);
            if (opt2 == 0)
                printf("usted eligio una platzi cola cero. Disfrute!");
            else if (opt2 == 1)
                printf("usted eligio una platzi cola con azucar. Disfrute!");
            else if (opt2 == 2)
                printf("usted eligio una platzi pina colada con azucar. Disfrute!");
            else if (opt2 == 3)
                printf("usted eligio una platzi limonada de coco. Disfrute!");
            else 
                printf("Opcion de bebida invalida");
        }
    else if(opt1 == 1)
        {
            printf("Usted eligio la opcion 1, vera nuestro menu de comidas, elija una:\n");
            printf("opcion 0 para platzi snack \n");
            printf("opcion 1 para platzi sandwich fitness \n");
            printf("opcion 2 para platzi picada light \n");
            printf("opcion 3 para platzi hamburguesa \n");
            printf("opcion 4 para platzi picada pizza \n");
            printf("opcion 5 para platzi ensalada de frutas \n");
            scanf("%d", &opt2);
            if (opt2 == 0)
                printf("Usted eligio una platzi snack. Disfrute!");
            else if (opt2 == 1)
                printf("Usted eligio un platzi sandwich fitness. Disfrute!");
            else if (opt2 == 2)
                printf("Usted eligio una platzi picada light. Disfrute!");
            else if (opt2 == 3)
                printf("Usted eligio una platzi hamburguesa. Disfrute!");
            else if (opt2 == 4)
                printf("Usted eligio una platzi pizza. Disfrute!");
            else if (opt2 == 5)
                printf("Usted eligio una platzi ensalada de frutas. Disfrute!");
            else 
                printf("Opcion de comida invalida");
        }
    else if(opt1 == 2)
        {
            printf("Usted eligio la opcion 2, vera nuestro menu de postres, elija uno:\n");
            printf("opcion 0 para platzi galleta \n");
            printf("opcion 1 para platzi chocolatina \n");
            printf("opcion 2 para platzi muffin \n");
            printf("opcion 3 para platzi flan \n");
            scanf("%d", &opt2);
            if (opt2 == 0)
                printf("Usted eligio una platzi galleta. Disfrute!");
            else if (opt2 == 1)
                printf("Usted eligio una platzi chocolatina. Disfrute!");
            else if (opt2 == 2)
                printf("Usted eligio un platzi muffin. Disfrute!");
            else if (opt2 == 3)
                printf("Usted eligio un platzi flan. Disfrute!");
            else 
                printf("Opcion de postre invalida");
        }
    else
    {
        system("cls");
        printf("Opcion de menu invalida.\n");
    }
        
    } while (opt1 < 0 || opt1 > 2);
    return 0;
}