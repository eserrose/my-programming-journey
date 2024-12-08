#include <stdio.h>

float fnc(float);
int main()

{

int a=1,b=5;
int i;
float h,N=1000000000;
float answer=0;
h=(b-a)/N;



for(i=1;i<N+1;i++)
{
    answer += h/2*(fnc(i*h+1)+fnc(i*h));


}
printf("\nAnswer= %f",answer);
}

float fnc(float x)
{
    float f;
    f=x*x*x-8*x*x+16*x;
    return f;
}
