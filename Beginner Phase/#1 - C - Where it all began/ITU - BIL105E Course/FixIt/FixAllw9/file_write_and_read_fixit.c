#include<stdio.h>
void main() 
{ 
int x; FILE *oku, *yaz; 
oku=fopen("veri.txt","r"); 
yaz=fopen("cikti.txt","w");
fscanf(oku,"%d",x); 
fprintf(yaz,"x=  \n",x);
fclose(oku); 
fclose(yaz); 
printf("veri cikti.txt dosyasina yazildi\n");
}
