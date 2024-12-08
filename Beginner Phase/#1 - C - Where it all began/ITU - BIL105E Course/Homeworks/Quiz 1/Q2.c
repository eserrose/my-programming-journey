#include <stdio.h>
#define N 12
int main()

{
float george[N] = {3,4,9,8,6,7,6,5,2,6,13,7};
int i,j;
float s,mean,sum=0;

for(i=0;i<N;i++)
{
    sum+=george[i];
}
mean = sum/N;

for(j=0;j<N;j++)
{
    s = sqrt(pow((george[j] - mean),2)/(N-1));
}
printf("Deviation is: %f",s);
}
