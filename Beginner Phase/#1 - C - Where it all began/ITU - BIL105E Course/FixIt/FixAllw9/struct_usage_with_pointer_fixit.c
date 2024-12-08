#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
	
typedef struct PERSON {
int sicil;
char ad[15];
char soyad[20];
float brut;
int yas;
int cins;
} PERS;

PERS kisi;
PERS *p;//this is a pointer as you see
p=kisi;
kisi.sicil=1;
strcpy(kisi.ad,"ahmet");
strcpy(kisi.soyad,"veli");
kisi.brut=5000;
kisi.yas=34;
kisi.cins=1;
printf("\n %d %s %s %f %d %d",kisi.sicil, kisi.ad, kisi.soyad, kisi.brut, kisi.yas, kisi.cins);
printf("\n %d %s %s %f %d %d",(*p).sicil, (*p).ad, (*p).soyad, (*p).brut, (*p).yas, (*p).cins);
printf("\n %d %s %s %f %d %d",p->sicil, p->ad, p->soyad, p->brut, p->yas,p->cins);
getch();
}
