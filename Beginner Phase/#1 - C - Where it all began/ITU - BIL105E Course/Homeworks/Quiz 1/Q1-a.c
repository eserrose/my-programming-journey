#include <stdio.h>

int main()

{

double val;
welp:printf("Enter a value bigger than zero: ");
scanf("%lf",&val);

if(val>0)
{
printf("Thank you!");
exit(0);
}
else {goto welp;}

}
