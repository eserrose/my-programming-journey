#include <stdio.h>

double root(double x);

int main()

{

double val;
welp:printf("Enter a value bigger than zero: ");
scanf("%lf",&val);

if(val>0)
{
root(val);
return 0;
}
else {goto welp;}

}

double root(double x)
{
double result;
result = sqrt(x);
printf("Square root is: %.3lf",result);

}
