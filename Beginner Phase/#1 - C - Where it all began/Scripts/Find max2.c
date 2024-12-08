#include <stdio.h>

int find_maximum(int Z[],int);

int main()
{

int size,i,array[100],maks,location;
printf("Enter number of elements in array: ");
scanf("%d",&size);

printf("\nEnter numbers of the array: ");

for(i=0;i<size;i++)
{
printf("\n%dth number: ",i+1);
scanf("%d",&array[i]);
printf("\n");

}

location = find_maximum(array,size);
maks = array[location];

printf("\nThe maximum of the array is the %dth number and its value is %d",location+1,maks);


return 0;
}

int find_maximum(int Z[],int Q)
{
int i,max=Z[0],index;
index = 0;

for(i=0;i<Q;i++)
{
if(Z[i]>max){
max = Z[i];
index = i;
}
}

return index;
}
