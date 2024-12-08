#include<stdio.h>
#include<conio.h>
void main(){
char ad[30]="Students want AA";
int no = 100;
FILE *dosya_yaz;
dosya_yaz = fopen("justafeeling.txt","w");
fprintf(dosya_yaz,"%s %d",ad,no);
fclose(dosya_yaz);
printf("Press ENTER to exit");
getch();
}
