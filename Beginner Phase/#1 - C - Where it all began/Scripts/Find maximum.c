#include <stdio.h>
int findmax(int array[], int);

int main()
{
int size;
printf("Create an array of what size?: ");
scanf("%d",&size);
int array[size];
int i;

for(i=0;i<size;i++)
{
    printf("\n%dth element of array: ",i+1);
    scanf("%d",&array[i]);
}
int location = findmax(array,size);
int maks = array[location];
printf("\nThe maximum of the array is %d which is the %dth element",maks,location+1);
}

int findmax(int array[],int n)
{
    int max,loc,i;
    loc=0;
    max=array[0];
    for(i=0;i<n;i++)
    {
        if(array[i]>max)
        {   max = array[i];
            loc = i;
        }
    }
    return loc;
}
