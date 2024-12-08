#include <stdio.h>
#include <math.h>
#include <time.h>
#define min 1
#define max 30
typedef struct{
double xl;
double xu;

} roots ;


double function(double x);
double err(double, double);
roots generator();

int main()

{

double error = 100;
//double xl=12,xu=16,xr=0;
roots r = generator();
double xr=0;
double truevalue = 14.7802;
printf("xl is %lf, xu is %lf and truevalue is %lf\n",r.xl,r.xu,truevalue);

while(error>0.00005)
{
    xr= (r.xl + r.xu)/2;
   if(function(r.xl)*function(xr)<0)
   {
        r.xu=xr;
        error=err(xr,truevalue);
        printf("At xr=%lf, error is %lf",xr,error);
        printf("\nResult is: %lf\n",function(r.xl)*function(xr));
   }

   else if(function(r.xl)*function(xr)>0)
    {
        r.xl=xr;
         error=err(xr,truevalue);
          printf("At xr=%lf, error is %lf",xr,error);
           printf("\nResult is: %lf\n",function(r.xl)*function(xr));
    }
    else if(function(r.xl)*function(xr)==0)
    {

        break;
    }

}

}

double function(double x)
{

double result = (667.38/x)*(1-exp((-10*x)/68.1))-40;
return result;

}

double err(double xr, double truevalue)
{
    double e = fabs(xr-truevalue)*100/truevalue;
    return e;

}

roots generator()
{
    roots r;
    r.xl=-10;
    r.xu=10;
    srand(time(NULL));
    while(function(r.xl)*function(r.xu)>0)
    {
        r.xl=rand()%(max-min+1)+min ;
        r.xu=rand()%(max-min+1)+min;
    }
        printf("xl=%lf and xu=%lf Function: %lf\n",r.xl,r.xu,function(r.xl)*function(r.xu));
        return r;
}
