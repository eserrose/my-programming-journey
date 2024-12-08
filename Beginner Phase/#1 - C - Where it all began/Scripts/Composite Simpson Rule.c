#include <stdio.h>
#include <math.h>

float f(float );

int main()
{
   int i,n;
   float x0,xn,h,y[10000],so=0,se=0,ans,x[10000];
   x0=1;
   xn=3;
   //printf("Enter x0,xn,h: ");
   //scanf("%f %f %f",&x0,&xn,&h);
   //n=(xn-x0)/h;
   printf("Enter the value of n: ");
   scanf("%d",&n);
   if(n%2==1)
   {n=n+1;}
   h=(xn-x0)/n;
   for(i=0;i<=n;i++)
   {
   x[i]=x0+i*h;
   y[i]=f(x[i]);
   printf("\n %f\n",y[i]);
   }

   for(i=1;i<n;i++)
   {
   if(i%2==0)
        {
        se+=y[i];
        }
    else if(i%2==1)
    {
        so+=y[i];
    }
   }

   ans = h/3*(f(x0) + 4*so + 2*se + f(xn));
   printf("\nIntegral = %f",ans);

}



float f(float x)
{

float y;
y= x*sin(30/x)*cos(50/x);

return y;


}
