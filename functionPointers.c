/*return-type function-name(parameters declarations, if any)
functions in C need to be declared first and later, defined
*/

#include <stdio.h>

int power(int base, int n);     //definition of power function

int main(){
    int base=2;
    int n=3;
    printf("El resultado de 2 a la n es: %d \n", power(base,n));
    printf("El valor original de n es: %d \n", n);
    return 0;
}

int power(int base, int n){
    int p;
    for (p = 1; n > 0; n--)
    {
        p = p * base;
        printf("el valor temporal de n es %d \n", n);
    }
    return p;
}