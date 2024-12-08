#include <stdio.h>
int main()

{
FILE *numbers;
float jason[30];
int i,j;
numbers = fopen("DATA.txt","r");
for (i=0;i<30;i++){
fscanf(numbers,"%f\n",&jason[i]);
}
fclose(numbers);

for(j=0;j<30;j++)
{
    printf("\n%f",jason[j]);
}

int k,m;
float s,mean,sum=0;

for(k=0;k<30;k++)
{
    sum+=jason[k];
}
mean = sum/30;

for(m=0;m<30;m++)
{
    s = sqrt(pow((jason[m] - mean),2)/(30-1));
}
printf("\n\nDeviation is: %f",s);
}
