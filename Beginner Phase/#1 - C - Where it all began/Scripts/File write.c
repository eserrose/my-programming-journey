#include<stdio.h>
#include<conio.h>


void main(){
char ad[50]="Yeah bitch I wrote this file without opening it";
int no = 100;
FILE *dosya_yaz;
dosya_yaz = fopen("heyyo.txt","w");
fprintf(dosya_yaz,"%s %d",ad,no);
fclose(dosya_yaz);
printf("Press ENTER to exit");
getch();
}
