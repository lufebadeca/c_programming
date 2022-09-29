#include <stdlib.h>
#include <stdio.h>

int binaryNumber[12],n,i;

main(){
    system("cls");
    system("color 9F");
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);

    printf("El resultado de %d a binario es:\n", n);

    for ( i = 0; n > 0; i++)
    {
        binaryNumber[i] = n%2;
        n = n/2;
        printf("%d... i es %d\n", binaryNumber[i], i);
    }

    printf("\n");

    for ( i-1 ; i > 0; i--)
    {
        printf("%d... i es %d\n", binaryNumber[i-1], i-1);
    }
}