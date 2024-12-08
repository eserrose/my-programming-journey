#include <stdio.h>
#include <math.h>

float dev(int [],int);


int main()

{
int N,i;
float d;
printf("Enter number of elements of the array: ");
scanf("%d",&N);

int array[N];

system("CLS");
printf("Now enter the numbers: ");

for(i=0;i<N;i++)
{
printf("\nNumber %d: ",i+1);
scanf("%d",&array[i]);
}

d=dev(array,N);
printf("\nDeviation is: %f",d);

}

float dev(int Jack[],int N)
{

int i,j;
float n=0,mean,sum=0,s;

for(j=0;j<N;j++)
{
sum+=Jack[j];
}

mean = sum/N;

for(i=0;i<N;i++)
{
n += pow(Jack[i] - mean,2);

}

s = sqrt((float)1/(N-1)*n);

return s;
}
