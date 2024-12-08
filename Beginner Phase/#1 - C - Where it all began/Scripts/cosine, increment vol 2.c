#include <stdio.h>
#include <math.h>
#define pi 3.14159


int main()


{
int i,j,inc;

printf("Enter increment: ");
scanf("%d",&inc);

int c = (180/inc +1);
int numbers[c];

printf("Theta       Cos: \n");
for(i=0,j=0;i<181,j<c;i=i+inc,j++)
{
numbers[j] = i;
}

double vals[c];

for(i=0;i<c;i++)
{
    vals[i] = cos(numbers[i]*pi/180);
}


for(i=0;i<c;i++)
{
printf("\n%3d     %10lf",numbers[i],vals[i]);
}
}

