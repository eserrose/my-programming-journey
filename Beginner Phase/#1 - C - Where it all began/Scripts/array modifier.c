#include <stdio.h>

int modifyArray(int *,int);
int modifyElement(int array);
int main()
{
int array[3] = {1,2,3};

modifyArray(array,3);

int i;
printf("Array is: ");
for(i=0;i<3;i++)
{
    printf("%d ",array[i]);
}

modifyElement(array[2]);

printf("\nModify element is %d",array[2]);
}

int modifyArray(int array[],int n)

{
    int i;
    for(i=0;i<n;i++)
    {
        array[i] *= 2;
    }
}

int modifyElement(int array)
{   printf("\nModify element is %d",array *= 2);
    array *= 2;
}
