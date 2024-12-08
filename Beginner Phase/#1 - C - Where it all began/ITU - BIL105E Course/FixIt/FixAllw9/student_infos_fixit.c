#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main () {
FILE =fopen("ogrenci.txt","w");
char ad[20],soyad[20];
int i;
long int okulno;
puts("10 ogrenciye ait bilgileri girin:");
for (i=1;i<=3;i++) 
{
printf("\n%d. Ogrencinin okul numarasi=",i);
scanf("%ld",okulno);
printf("%d. Ogrencinin Adi=",i);
scanf("%s",&ad);
printf("%d. Ogrencinin Soyadi=",i);
scanf("%s",&soyad);
fprintf(enf,"%ld %s %s\n",okulno,ad,soyad);   
}
fclose(enf);
puts("veriler dosyaya yazildi");
}
