#include <stdio.h>
#include <math.h>
#define pi 3.1415926
int main()
{

float t;

while(t<9999)
{
printf("Enter t value: ");
scanf("%f",&t);
float V = 10*sin(502.7*t*pi/180) + 5*sin(94.2*t*pi/180) + 15*sin(942.5*t*pi/180);
printf("\nV=%f\n",V);
}
}
