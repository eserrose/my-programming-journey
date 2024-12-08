#include <stdio.h>
#include <string.h>

int main()

{

char first_name[] = "Eser";
char surname[] = "Gul";

if(strncmp(first_name,"Eser",10)!=0) return 0;
if(strncmp(surname,"Gul",10)!=0) return 0;

char name[50];
surname[0] = 'B';
sprintf(name,"%s %s",first_name,surname);

strcat(name,"l");

printf("%s\n",name);

if(strncmp(name,"Eser Bull",50)==0) printf("Done!");



}
