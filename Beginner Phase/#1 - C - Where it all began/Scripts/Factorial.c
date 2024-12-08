#include <stdio.h>

int factorial(int number);


int main()

{
int i,N;
printf("Enter your number: ");
scanf("%d",&N);
for(i=0;i<N;i++)
{
printf("%d! = %i\n",i+1,factorial(i+1));
}

}


int factorial(int number)
{
    if(number>1)
    { number *= factorial(number-1);}
    return number;

}
