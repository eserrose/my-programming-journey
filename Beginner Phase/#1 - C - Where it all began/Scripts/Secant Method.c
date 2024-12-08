#include <stdio.h>
#include<conio.h>
#include<math.h>
#define ESP 0.001

float F(float x)
{
float f;
f= x*x-x-1;
return f;
}

int main()
{

float a,b,t,x3,f1,f2;
printf("Enter values x0 and x1:");
scanf("%f%f",&a,&b);

do
  {
  f1=F(a);
  f2=F(b);
  x3=b-((f2*(b-a))/(f2-f1));
  printf("\n%f   %f   %f   %f   %f",a,b,x3,f1,f2);
  a=b;
  b=x3;
  if(f2<0)
    t=fabs(f2);
  else
    t=f2;
  }while(t>ESP);
printf("\n______________________________________________\n");
printf("\n\nApp.root = %f",x3);
getch();
}
