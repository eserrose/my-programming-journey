# include <stdio.h>
# include <stdlib.h>
int main()
{
	int sayilar[5],i,sayi;
	
	printf("Enter 5 numbers and create an array:\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter number %d\n",i+1);
		scanf("%d",&sayilar[i]);
	}
	
	system("CLS"); //this is new it will clean the screen form stdlib.h header file
	printf("The value to search :"); scanf("%d",&sayi);
	
	for(i=0;i<5;i++)
	{
		if(sayilar[i]==sayi)
		{
			break;
		}
	}
		
	if (bul==1)// IF bul=1 from above this will work
	{
		printf("Value entered %d is found %dth element of array",sayi,i+1);
	}
	else
	{
		printf("It is not in the array");
	}

}
