#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   
    //Favourite course
    char cho[25], cho2[25];
    system("cls");
    system("color 9F");
    printf("Please, write yur favourite Platzi course\n");
    gets(cho);
    int n;
    printf("Please, specify how many times you want to print the course\n");
    scanf("%d", &n);
    int i;
    for (i=1; i <= n; i++)
    {
        printf("%s\n", cho);
    }

    //Favourite animal in columns
    printf("\nPlease, write your favourite animal\n");
    scanf( "%s", &cho2 );
    int n2;
    printf("Please, specify how many times you want to print the animal\n");
    scanf("%d", &n2);
    printf("%s\n", cho2);
    printf("The length is %d\n", strlen(cho2));
    system("pause");
    int j,k;
    for (j = 0; j < strlen(cho2) ; j++)
    {
        for (k=0; k < n2 ; k++)
        {
            printf("%c\t", cho2[j]);
        }
        printf("\n");
    }

    //multiplication table
    int num;
    printf("\nPlease, write a number to generate its multiplication table\n");
    scanf( "%d", &num );
    int m;
    for (m=1; m <= 10 ; m++)
    {
        printf("%d x %d = %d\n", num, m, num*m );
    }
    printf("\n");

    //backward count
    int o, count;
    printf("Please, type a number for the backward count\n");
    scanf("%d", &o);
    if(o>0){
        for (count = o; count >= 0 ; count--)
        {
            printf("%d\n", count);
        }
    }
    else{
        for (count = o; count <= 0 ; count++)
        {
            printf("%d\n", count);
        }
    }
    
    // Authorized sum
    int total=0, ii;

    for (ii = 1; ii <= 4; ii++)
    {
        int number;
        char answer;
        printf("Please, type the %d number\n", ii);
        scanf("%d", &number);
        printf("Would you like to add this number to the total? Y/N\n");
        scanf(" %c", &answer);
        if (answer == 'n' || answer == 'N')
            continue;
        total = total + number;
    }
    printf("The total is %d", total);

   //Numeric line
    int range;
    char answer2;
    printf("Please, type + for a positive range and - for a negative \n");
    scanf(" %c", &answer2);
    printf("Please, indicate the maximum value \n");
    scanf("%d", &range);
    int g;
    if (answer2 == '+')
    {
        for (g = 0; g <= range; g++)
        {
            printf("%d ", g);
        }
    }
    else{
        for (g = range; g >= 0; g--)
        {
            printf("-%d ", g);
        }
    }    
}
