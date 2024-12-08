#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define n 5

double orthesap(int dizi[],double boy)
{
	int toplam=0;
	int i;
	for(i=0;i<boy;i++)// remember you define "type" inside for so the error?
	{
		toplam+=dizi[i];

	}
	double ort=toplam/boy;

	printf("Sinif ortalamasi :%.1f",ort);
	return ort;
}




int main()
{
	int diz[n];
	printf("Degerleri giriniz\n");
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d. deger :",i+1);scanf("%d",&diz[i]);
	}
	orthesap(diz,n);
	getchar();
	return 0;
}
