#include <stdio.h>
#include <math.h>

float dev(int [],int);


int main()

{

printf("Enter number of elements of the array: ");
int i,N,j;
float d;
scanf("%d",&N);
system("CLS");
int array[N];
printf("Now enter the numbers");
for(i=0;i<N;i++)
{   printf("\nNumber %d: ",i+1);
    scanf("%d",&array[i]);
}
d = dev(array,N);
printf("\nDeviation is: %f",d);

}




float dev(int BAT[],int N)
{
    float mean=0,sum=0,n=0;
    int i,j;

for(j=0;j<N;j++)
      {
          sum+=BAT[j];
      }

      mean=sum/N;
    for(i=0;i<N;i++)
    {
        n+=pow(BAT[i]-mean,2);
    }
    float s= ((float)1/(N-1))*n;

    return s;
}
