#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415

void main()
{
int i;
int array[6],n,y;
    for(i=0;i<6;i++)
        {printf("Enter number %d:",i+1);
        scanf("%d",&array[i]);}

    system("CLS");
    printf("Enter a number again:");
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
        if(array[i]==n)
        {
            y=1;
            break;
        }
    }
    if(y==1)
    {
         printf("%d is the %dth number in the array which you arranged",n,i+1);
    }
    else{printf("You didn't involve %d in your array",n);}
}
