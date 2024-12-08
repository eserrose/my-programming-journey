#include <stdio.h>
#include <string.h>

int main()


{
struct

{   char name[50];
    char surname[50];
    char year[50];
} person;

char mail[] = "@itu.edu.tr";
char x[50] = "";
printf("Enter your name, surname and year of birth: ");
scanf("%s%s%s",&person.name,&person.surname,&person.year);


strcat(x,person.surname);
strncat(x,person.name,1);
strcat(x,person.year);
strcat(x,mail);
printf("\nYour mail is: %s",x);


}
