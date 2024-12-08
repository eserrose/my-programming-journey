#include <stdio.h>
void main()
{

int x,y,z;
yaz = fopen("deneme.txt","w");
printf("ENTER  TWO NUMBERS : ");
scanf("%d %d",x,y);
z = x+y;
fputs( "SUM of TWO INTEGERS\n",yaz);
fprintf(yaz,"%d + %d = %d",x,y,z);
fclose(yaz);
puts("Bilgiler kaydedildi. Devam etmek için ENTER tuþuna basýn.");
getchar();
}
