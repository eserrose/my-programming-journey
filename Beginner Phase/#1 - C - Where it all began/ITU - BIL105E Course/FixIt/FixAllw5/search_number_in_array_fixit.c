# include <stdio.h>
# include <stdlib.h>
int main()
{
	int sayilar[]={44,58,78,65,12,34,25,10,8,20},sayi,i,bul=0; //bul=0 here
	
	printf("Enter a value to aeach in array :\n"); scanf("%d",&sayi);
	
	for(i=0;i<10,i++)
	{
		if(sayilar[i]==sayi)
		{
	       bul=1;break;
		//	printf("girdiginiz %d sayisi dizinin %d.nci elemani",sayi,i+1); 
		// BU MESAJI AÞAÐIDA YAZDIRDIK bul=1 e deðer vererek (bayrak iþi gördü)
		// We print the message below according to bul=1 flag.. We could print here only, no need the part below..But get the logic of flag
		}
	}
	
	if (bul==1)// IF bul=1 from above this will work
	{
		printf("Value entered %d is found %d.th element of array",sayi,i+1);
	}
	else
	{
		printf("It is not in the array");
	}

}


