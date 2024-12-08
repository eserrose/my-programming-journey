#include <stdio.h>

int main()
{

    double num;
    double i;
    double sum=0;
printf("Would you please enter a number of your desire, kind sir: ");
scanf("%lf",&num);



for(i=1; i<=num; i++)
{   sum = sum + (1 / i);
    if(i==1){printf("1+");}
    else if (i<num)
    {
        printf("1/%.0lf + ",i);
    }
    else {
        printf("1/%.0lf",i);
    }
}
printf("\nThe sum of the series you requested is: %lf",sum);
printf("\nThank you, gentleman, for your concern and please don't hesitate to ask for my assistance when in need. ");

system("pause");
return 0;
}
