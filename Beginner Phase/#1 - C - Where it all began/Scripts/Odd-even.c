#include <stdio.h>
int main()

{
int x,i;
printf("Enter number:");
scanf("%d",&x);

for(i=0;i<=x;i++)
{ if(x>0)
    {if(i%2==0)
    {printf("%d is even\n",i);}
    else
    {printf("%d is odd\n",i);}}
else if(x==0)
{
    printf("Number is zero");
}

}


}
