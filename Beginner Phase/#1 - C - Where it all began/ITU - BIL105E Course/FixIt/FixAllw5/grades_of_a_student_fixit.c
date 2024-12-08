# include <stdio.h>
int main()
{
	int ogrvize[10],ogrfinal[10],aanot=0,bbnot=0,ccnot=0,ddnot=0,ffnot=0;
	float ort[10];
    int i;
	for (i=0;i<10;i++)//remember what we did in class int gives error in for (If you did not change your compiler etc)..Hint:You can declare type of i above and just use here
	{
		printf("%d vize gir",i+1);scanf("%d",&ogrvize[i]);
		printf("%d final gir",i+1); scanf("%d",&ogrfinal[i]);
		ort[i]=ogrvize[i]*0.4+ogrfinal[i]*0.6;

		if (ort[i]>90 && ort[i]<=100)
		{
			aanot++;
		}
			else if (ort[i]>70 && ort[i]<=89)
		{
			bbnot++;
		}
		else if (ort[i]>50 && ort[i]<=69)
		{
			ccnot++;
		}
		else if (ort[i]>30 && ort[i]<=49)
		{
			ddnot++;
		}
		else
		{
			ffnot++;
		}
	}
	printf(" AA %d\n BB %d\n CC %d\n DD %d\n FF %d\n",aanot,bbnot,ccnot,ddnot,ffnot);

}
