#include <stdio.h>
#include <string.h>

int main ()
{

char name[50],sur[50];
char year[4];
char x[50]="";
char mail[]="@itu.edu.tr";

printf("Enter name, surname and year:");
scanf("%s%s%s",&name,&sur,&year);
strcat(x,sur);
strncat(x,name,1);
strcat(x,year);
strcat(x,mail);
printf("\nYour email is: %s",x);

  getchar();
  return 0;
}
