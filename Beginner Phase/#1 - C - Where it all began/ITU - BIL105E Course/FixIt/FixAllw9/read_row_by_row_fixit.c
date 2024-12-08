#include<stdio.h>
#include<conio.h>
// row by row reading
main()
{

char kelime[100];
char *c;
dosya = fopen("values.dat","r");

do{
c = fgets(kelime,20,dosya);
if (c!=NULL)
printf("%s", kelime);
}while(c!= NULL);

fclose(dosya);
getch();
}
