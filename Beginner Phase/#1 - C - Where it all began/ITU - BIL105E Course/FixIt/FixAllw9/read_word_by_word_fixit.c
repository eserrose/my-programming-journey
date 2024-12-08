#include<stdio.h>
#include<conio.h>
// word by word reading from a file
main(){
	

char kelime[100];
int c;
dosya = fopen ("values.dat","r");


do{
c = fscanf(dosya,"%s", kelime); // dosyadan bir kelime okuyalim

if ( c != EOF) 
{printf("%s\n", kelime); // ekrana yazalim
}

}while( c != EOF);// dosya sonuna kadar devam


fclose(dosya);
getch();
}
