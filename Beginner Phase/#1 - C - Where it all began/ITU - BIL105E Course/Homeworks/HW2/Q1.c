#include <stdio.h>
#include <math.h>
#define pi 3.14159

float cosine(int x);

int main ()

{
    int in,i,j;
    float cos;
    printf("Enter increment: ");
    scanf("%d",&in);
    printf("Theta     Cosine\n");
    for(i=0;i<181;i=i+in)
    {
     cos=cosine(i);
     printf("%3d%16.6lf\n",i,cos);
    }
}

float cosine(int x)
{
    float deg;
    deg = cos(x*pi/180);
    return deg;


}
