#include <stdio.h>
#include <math.h>

int main()
{
int x;
printf("X=");
scanf("%d",&x);
double a = fabs(x);
float b = fabs(x);
printf("\n%lf\n",a);
printf("\n%f",b);
printf("\nA.Value= %f",fabs(x));
return 0;
}
