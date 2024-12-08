#include <stdio.h>

int findmax(int array[], int n);

int main()

{
int size;
printf("Create an array of what size? ");
scanf("%d",&size);
int array[size];

int i;

for(i=0;i<size;i++)
{
    printf("\nEnter the %dth number of the array: ",i+1);
    scanf("%d",&array[i]);
}

int location = findmax(array,size);
int maks = array[location];

printf("\nThe biggest element of the array is %d which is the %dth element",maks,location+1);

}

int findmax(int array[],int n)

{

int i,loc;
int max = array[0];
for(i=1;i<n;i++)
{
if(array[i]>=max)
{
max = array[i];
loc = i;
}

}

return loc;


}
