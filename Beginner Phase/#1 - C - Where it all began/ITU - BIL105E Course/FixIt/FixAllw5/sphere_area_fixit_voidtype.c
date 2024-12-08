#include <stdio.h>
#define pi 3.141596
double alan(double);

void main(){
float r;
printf("Enter the radius of shpere\n ");
scanf("%f", &r);
printf("Area of shpere= %.2f \n", alan(r));
return 0;
}
double alan(double a)
{
return 4*pi*a*a;
}

