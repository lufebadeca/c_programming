#include <stdio.h>
#include <time.h>

time_t seconds, begin, end;

int main(){
    unsigned long i;
    seconds = time(NULL);    //seconds passed since jan 1 1970 at 0:00
    printf("El numero de horas desde EPOCH (Enero 1 de 1970 a las 0:00) es: %ld", seconds/3600);

    for ( i = 0; i < 10000000000; i++);

    end = time(NULL);
    
    printf("El tiempo que tardo el programa en correr fue, en seg: %f", difftime(end, seconds));
    
    return 0;
}

