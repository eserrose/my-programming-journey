#include <stdio.h>

int main()

{
int i,low,high,flag;
printf("Enter two number: ");
scanf("%d %d",&low,&high);


while(low<high)
{
    flag = 0;

    for(i=2;i<=low/2;i++)
    {
        if(low%i == 0)
        {   flag=1;
            break;}
    }

     if (flag == 0)
            printf("%d ", low);

        ++low;
}





}
