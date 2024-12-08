#include <stdio.h>
#include <stdlib.h>

int biggest(int [],int h);

int main()

{
int *Jack;
int w,i;
int location,maks;
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
/*location = biggest(Jack,w);
maks = Jack[location];*/
biggest(Jack,w);

return 0;
}


int biggest(int Z[],int h)
{

    int loc=0;
    int j,maximum=-99999999999999;
    for(j=0;j<h;j++)
    {
    if(Z[j]>maximum)
    {
        loc = j;
        maximum=Z[j];

    }

    }
printf("Biggest element is %d and its value is %d",loc+1,maximum);
//return loc;
}
