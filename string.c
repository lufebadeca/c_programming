#include <stdio.h>
#include <string.h>

int main(){
    char string1[60];

    printf("escribe una frase: \n");
    gets(string1);

    strrev(string1);

    printf("El string revertido es: %s\n", string1);
}