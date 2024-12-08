#include <stdio.h>
#define pi 3.141596

double alan(double);

int main(){
float r;
printf("Enter the radius of shpere\n");
scanf("%f", &r);
printf("Area of shpere= %.2f \n", alan(r));

}
double alan(double a)
{
return 4*pi*a*a;
}

