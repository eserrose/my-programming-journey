#include <stdio.h>
#include <math.h>
#define pi 3.14159


int main()


{
int i,inc;

printf("Enter increment: ");
scanf("%d",&inc);

int numbers[(180/inc +1)];

printf("Theta       Cos: \n");
for(i=0;i<181;i=i+inc)
{
printf("%3d     %10lf\n",i,cos(i*pi/180));

}
}
