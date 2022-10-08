#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[10];
char lastName[10];
char country[10];

int main(int argc, char const *argv[])
{
    printf("please, enter your name:_");
    gets(name);
    printf("please, enter your last name:_");
    gets(lastName);
    printf("please, enter your country of origin:_");
    gets(country);
    name[0] = toupper(name[0]);
    lastName[0] = toupper(lastName[0]);
    country[0] = toupper(country[0]);
    printf("Hello, %s %s, your country of origin, %s, is very beautiful.\n", name, lastName, country);
    
    printf("type a phrase or sentence\n");
    char myString[200];
    int start, end;
    gets(myString);

    printf("the sentence length is %d. Please enter the start character of what you want to show: ", strlen(myString));
    scanf("%d", &start);
    printf("Please, enter the end character: ");
    scanf("%d", &end);
    int i;
    for (i = start; i < end; i++)
    {
        printf("%c", myString[i]);
    }
    
    char name2[50], lastName2[50];
    printf("Tell me your name: ");
    gets(name2);
    if(strlen(name2)>=5){
        name2[0] = toupper(name2[0]);
        printf("Hola, %s, es un gusto saludarte", name2 );
    }
    else{
        printf("Tell me your last name: ");
        gets(lastName2);
        lastName2[0] = toupper(lastName2[0]);
        printf("Hola, %s %s.", name2, lastName2);
    }
    printf("Please, type your phare ro be translated into Pig Latin");
    char word[20];
    gets(word);
    char first = tolower(word[0]);
    printf("%c\n", first);
    if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u')
    {
        printf("vocals\n");
        strcat(word,"way");
        printf("%s",word);
    }
    else{
        printf("consonants\n");
        char newWord[25];
        int i;
        for ( i = 1; i < strlen(word); i++)
        {
            newWord[i-1]=word[i];
            if (i == strlen(word)-1)
                newWord[strlen(word)-1] = first;
        }
        strcat(newWord,"ay");
        newWord[0]= toupper(newWord[0]);
        printf("%s",newWord);
    }
    
    return 0;
}
