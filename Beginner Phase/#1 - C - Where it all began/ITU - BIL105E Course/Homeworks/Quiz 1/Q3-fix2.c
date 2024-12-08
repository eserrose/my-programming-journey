#include <stdio.h>
#include <stdlib.h>
int biggest(int *Z,int h);
int main()
{
int *Jack;
int w,i;
printf("Size of array: ");
scanf("%d",&w);
if(w<=0)
{exit(0);}
Jack = (int *) malloc(sizeof(int)*w);
if( Jack == NULL )
{
    printf("Insufficient memory");
    exit(0);
}
for(i=0;i<w;i++)
{
    printf("\n%dth element: ",i+1);
    scanf("%d",&Jack[i]);
}
biggest(Jack,w);
}
int biggest(int *Z,int h)
{
    int j,maximum=0;
    for(j=0;j<h;j++)
    {
    if(Z[j]>maximum)
    {
        maximum=Z[j];
    }
    }
    printf("Biggest element is %d and its value is %d",j,maximum);
}
