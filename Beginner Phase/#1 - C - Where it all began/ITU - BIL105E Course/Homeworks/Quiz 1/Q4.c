#include<stdio.h>
#include <string.h>

int main()

{
struct{
char name[15];
char surname[15];
char date[15];
}mypassword;

char pass[40]="";
printf("Enter your\nName: ");
scanf("%s",&mypassword.name);
printf("\nSurname:");
scanf("%s",&mypassword.surname);
printf("\nYear of birth:");
scanf("%s",&mypassword.date);

strncat(pass,mypassword.name,1);
strcat(pass,mypassword.date);
strcat(pass,mypassword.surname);
printf("\nYour password is:%s",pass);
}
