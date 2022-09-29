/*return-type function-name(parameters declarations, if any)
functions in C need to be declared first and later, defined
*/

#include <stdio.h>

int power(int base, int n);     //definition of power function

int main(){
    int i,j;
    int base, n;
    for ( i = 2; i <= 5; i++)
    {
        for (j = 1; j <=5; j++)
            {
                printf("El resultado de %d elevado a la %d es: %d.\n", i, j, power(i,j));
            }
    }
    return 0;
}

int power(int base, int n){
    int i, p;
    p=1;
    for (i = 1; i <= n; i++)
    {
        p = p * base;
    }
    return p;
}