#include <stdio.h>
#include <math.h>

float dev(float [],int );

int main()
{
FILE *numbers;
int i,j;
float thanatos[30];
char c;
int N = 0;

numbers = fopen("DATA.txt","r");

if(numbers == NULL)
{
    printf("\nError. Can't open file.");
    return 0;
}

for(c = getc(numbers);c != EOF;c=getc(numbers))
{
    if(c=='\n')
        N += 1;
}
fclose(numbers);
printf("The file has %d lines\n ",N);

numbers = fopen("DATA.txt","r");

for(i=0;i<N;i++)
{
fscanf(numbers,"%f\n",&thanatos[i]);
}
fclose(numbers);

for(j=0;j<N;j++)
{
printf("\n%f",thanatos[j]);
}

float ans;
ans = dev(thanatos,N);
printf("\nDeviation is: %f",ans);
}




float dev(float nyx[],int N)
{
    int i,j;
    float s=0,sum=0,mean,n=0;

    for(j=0;j<N;j++)
    {
        sum += nyx[j];
    }
    mean = sum/N;

    for(i=0;i<N;i++)
    {
        n += pow((nyx[i] - mean),2);
    }
    s = sqrt(n/(N-1));
    return s;
}
