#include <stdio.h>
#include <math.h>

double showdata(double* x, double* y, int n);
double coefficients(double s, double x, double y, double x2,double y2, double n);
int main()
{

int n,i,j;

printf("Enter n: ");
scanf("%d",&n);
double xvalues[n],yvalues[n],sum=0,xsum=0,ysum=0,xsq=0,ysq=0;
printf("\nEnter the x-values:\n");

for(i=0;i<n;i++)
{
    scanf("%lf",&xvalues[i]);
    printf("\n");
}

printf("\nEnter the y-values:\n");
for(j=0;j<n;j++)
{
    scanf("%lf",&yvalues[j]);
    printf("\n");
}

showdata(xvalues,yvalues,n);

for(i=0;i<n;i++)
{
   sum += xvalues[i]*yvalues[i];
   xsum += xvalues[i];
   ysum += yvalues[i];
   xsq += pow(xvalues[i],2);
   ysq += pow(yvalues[i],2);

}
printf("Sum of x*y: %lf\nSum of x: %lf\nSum of y: %lf\nSum of x-squares: %lf\n",sum,xsum,ysum,xsq);
coefficients(sum,xsum,ysum,xsq,ysq,n);

}

double showdata(double* x, double* y, int n)
{
    int i;
    FILE *values;
    values = fopen("values.txt","w");
    for(i=0;i<n;i++)
    {
        printf("X: %lf, Y: %lf \n",x[i],y[i]);
        fprintf(values,"%lf,%lf \n",x[i],y[i]);
    }

    fclose(values);

}

double coefficients(double s, double x, double y, double x2,double y2, double n)
{
    double a1= (n*s - x*y)/(n*x2-pow(x,2));
    printf("a1 = %lf\n",a1);
    printf("a0 = %lf",y/n - a1*x/n );
    printf("\nEquation: %lfx + %lf",a1,y/n-a1*x/n);
    double r = (n*s-x*y)/sqrt((n*x2-pow(x,2))*(n*y2-pow(y,2)));
    printf("\nCorrelation coefficient: %lf",r);
}
