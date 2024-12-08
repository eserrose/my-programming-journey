#include <stdio.h>

int main()

{

int day;
printf("Enter a number: ");
day = getchar();
switch(day){
    case '1': printf("Monday"); break;
    case '2': printf("Tuesday"); break;
    case '3': printf("Wednesday"); break;
    default: printf("Nevermind"); break;
    }

int M;
printf("\n Another number:");
scanf("%d",&M);
switch(M)
{
    case 1: printf("Boo Yeah"); break;
    case 2: printf("Damn dude"); break;
    case 3: printf("You rock!"); break;
    default: printf("Too lazy to write more"); break;
}

printf("\nAs you see, if we use getchar, it gets character so we use the single quotes\n")
;}
