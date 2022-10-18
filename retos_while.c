#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    /*int total=0, num;
    do
    {
        printf("Ingrese un numero para sumar al total acumulado %d \n",total);
        scanf("%d", &num);
        total+= num;
    } while (total<=50);

    printf("El total acumulado es %d",total);
    
    int num2;
    do
    {
        printf("Ingrese un numero mayor a 42\n");
        scanf("%d", &num2);
    } while (num2<=42);

    printf("El numero ingresado es %d",num2);
    
    int num3,num4, tot=0;
    char ans;
    printf("Ingrese dos numeros separados por espacios\n");
    scanf("%d %d", &num3, &num4);
    tot = num3 + num4;
    printf("Los numeros son %d y %d\n", num3, num4);
    printf("Desea anadir mas numeros? Y/n\n");
    scanf(" %c", &ans);

    while (ans!='n' && ans!='N')
    {
        printf("Ingrese el nuevo numero.\n");
        scanf(" %d", &num4);
        tot+= num4;
        printf("Desea anadir mas numeros? Y/n\n");
        scanf(" %c", &ans);
    }

    printf("El numero total es %d",tot);
    
    int totInv = 0;
    char ans2;
    char name[] = "";
    printf("Ingresa tu nombre\n");
    scanf(" %s", name);
    totInv = 1;
    printf("Desea anadir mas invitados? Y/n\n");
    scanf(" %c", &ans2);

    while (ans2!='n' && ans2!='N')
    {
        printf("Ingrese el nuevo invitado.\n");
        scanf(" %s", &name);
        totInv += 1;
        printf("%d invitados. Desea anadir mas numeros? Y/n\n", totInv);
        scanf(" %c", &ans2);
    }

    printf("El numero total de invitados es %d",totInv);
    
    time_t t;
    int counter;
    system("cls");
    system("color 9F");

    srand((unsigned) time(&t)); //initializes random generator
    int enteredN, secretN = (rand() % 100);    //ramdom from 0-100
    do 
    {
        printf("Adivine el numero secreto del 1 al 100...\n");
        scanf("%d", &enteredN);
        counter+=1;
        if (enteredN > secretN)
        {
            printf("El numero secreto es menor que %d.\n", enteredN);
        }
        if (enteredN < secretN)
        {
            printf("El numero secreto es mayor que %d.\n", enteredN);
        }

    }while (enteredN != secretN);

    printf("Adivinaste el numero secreto. Necesitaste %d intentos.\n", counter);
    */
    system("cls");
    system("color 9F");
    int enteredElep = 1, account=1;

    while ( account<=9 )
    {   
        if (account==1)
            printf("%d elefante se balanceaba sobre la tela de una arana...\n", account);
        else
            printf("\n%d elefantes se balanceaban sobre la tela de una arana...\n", account);
        printf("como veian que resistia fueron a llamar a otro elefante.\n");
        printf("Ingrese el numero de elefantes que se balancearan:");
        scanf("%d", &enteredElep);
        account+=1;
        while (enteredElep != account)
        {
            printf("Por favor intente de nuevo:");
            scanf("%d", &enteredElep);
        }      
    }
    printf("Se han balanceado %d elefantes hasta que la tela de arana finalmente se rompio.\n",account);
    return 0;
}
