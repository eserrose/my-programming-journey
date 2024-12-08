#include <stdio.h>
void main()
{
FILE  *oku;
char  ktr[10],kr
int   tam;
long  uzun_tam;
float reel;
oku=fopen("values.dat","r");
fscanf(oku,"%s\n%c\n%d\n%ld\n%f",ktr,&kr,&tam,&uzun_tam,&reel);
fclose(oku);
puts("Dosyadan okunan veriler sirasiyla:");
printf("%s\n%c\n%d\n%ld\n%f",ktr,kr,tam,uzun_tam,reel);
}
