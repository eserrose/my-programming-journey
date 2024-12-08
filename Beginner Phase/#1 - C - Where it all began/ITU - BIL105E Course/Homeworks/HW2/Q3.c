#include <stdio.h>


void carp(int *A,int *N);

int main()

{   int N=-3;
    int i,j;
    int A[6]={13,8,17,11,14,63};
    printf("Array at the beginning:");

for(i=0;i<6;i++)
{
    printf("%d ",A[i]);
}

printf("\nArray after function: ");

carp(A,&N);

for(j=0;j<6;j++)
{
    printf("%d ",A[j]);
}

}

void carp(int *A,int *N)
{
    int i;
    for ( i = 0; i < 6; i++)
	{
		A[i] *= *N;
	}
}
