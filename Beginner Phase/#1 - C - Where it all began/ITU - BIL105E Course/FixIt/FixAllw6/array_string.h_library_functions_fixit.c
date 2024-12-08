#include <stdio.h>
#include <string.h>
int main()
{
	//--------------------------------------------------------------------------------
	char isim[10],isimkopya[10],mesaj[10]="Hello ";

	printf("Enter a name :\n"); scanf("%s",&isim);

	strcpy(isimkopya,isim);	//                                            strcpy
	int uzun=strlen(isimkopya);//                                         strlen

	strcat(mesaj,isimkopya);//                                            strcat
	printf("Lenght of the name: %d \n",uzun);
	printf("The message is: %s \n",mesaj);
	printf("Reverse of message: %s \n",strrev(mesaj));//                  strrev
	printf("in lower case: %s\n",strlwr(mesaj));//                        strlwr
	printf("in upper: %s\n",strupr(mesaj));//                             strupr

	char baskent[]="Ankara",cevap[10];

	printf("The Capital city of Turkiye? :"); scanf("%s",&cevap);

	if (strcmp(baskent,cevap)==0)//                                       strcmp
	{
		printf("OK!! %s is right",cevap);
	}
	else
	{
		printf("Learn it");
	}

	getchar();
	return 0;





}
