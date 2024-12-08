#include <stdio.h>
#include <string.h>
void main()

{
    struct
    {
        char name[20];
        char year[10];
        char surname[20];
    } person1,person2;

    printf("Enter your names: ");
    scanf("%s%s",&person1.name,&person2.name);
    printf("\nSurname: ");
    scanf("%s",&person1.surname);
    printf("Your birth dates: ");
    scanf("%s%s",&person1.year,&person2.year);
    strcat(person1.name,person2.name);
    strcat(person1.name,person1.surname);
    strcat(person1.name,person1.year);
    strcat(person1.name,person2.year);

    printf("Pass: %s",strlwr(person1.name));


}
