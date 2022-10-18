#include <stdio.h>
#include <math.h>
#ifndef MPI
#define MPI 3.14159265358979323846
#endif

int main(int argc, char const *argv[])
{
    float num1, num2, num3;
    int num4, num5, div;
    /*printf("please, type the first number:\n");
    scanf("%f", &num1);
    printf("please, type the second number:\n");
    scanf("%f", &num2);
    printf("The result of %f times %f is: %.2f \n", num1, num2, num1*num2);

    printf("please, type the a number greater than 20:\n");
    scanf("%f", &num3);
    float result = sqrt(num3);
    printf("%.3f", result);
    */
    printf("please, type a number:\n");
    scanf("%d", &num4);
    printf("please, type other number:\n");
    scanf("%d", &num5);
    printf("The result of %d divided by %d is: %d, and its residue is %d \n", num4, num5, num4/num5,num4%num5);

    int cho;
    float side, radius, perim, area;
    printf("Type your choice... \n1 for Square\n2 for circle\n3 for triangle\n");
    scanf("%d", &cho);
    switch (cho)
    {
    case 1: printf("Please, type the length of the square side");
        scanf("%f",&side);
        perim = side*4;
        area = pow(side,2);
        printf("Your square's perimeter is %.2f and its area is %.2f\n", perim, area);
        break;
    case 2: printf("Please, type the radius of your circle\n");
        scanf("%f",&radius);
        perim = MPI * 2 * radius;
        area = pow(radius,2) * MPI ;
        printf("Your circle's perimeter is %.2f and its area is %.2f\n", perim, area);
        break;
    case 3: printf("Please, type the lenght of your triangle sides\n");
        scanf("%f",&side);
        perim = 3 * side;
        area =  side * (sqrt(3)*side/2)/2 ;
        printf("Your circle's perimeter is %.2f and its area is %.2f\n", perim, area);
        break;
    
    default:
        break;
    }

    return 0;
}
