#include <stdio.h>
#include <string.h>

void main()

{

struct{
char name[20];
char surname[30];
int age;
}person,person2;

printf("Your name: ");
scanf("%s",&person.name);

printf("\nYour surname: ");
scanf("%s",&person.surname);

printf("\nYour age: ");
scanf("%d",&person.age);

strcat(person.name,person.surname);

if(strncmp(person.name,"EserGul",20)==0)
{
    printf("\nWelcome Mr.Rose\n");
}

printf("\nYour name: ");
scanf("%s",&person2.name);

printf("\nYour surname: ");
scanf("%s",&person2.surname);

printf("\nYour age: ");
scanf("%d",&person2.age);

strcat(person2.name,person2.surname);
strlwr(person2.name);

if(strncmp(person2.name,"ecemkonu",20)==0)
{
    printf("\nWelcome Ms.Konu\n");
}

printf("Enter a sentence: ");
char sentence[200];
gets(sentence);
gets(sentence);
printf("\n%s",strrev(sentence));

}
