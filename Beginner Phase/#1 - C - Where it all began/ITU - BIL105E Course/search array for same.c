#include <stdio.h>

#define N 5
int main()

{
    int array[N];
    int i;
    printf("Enter an array of integers: ");

    for(i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }

    int j,count;
    for(i=0;i<N;i++)
    {
        count = 1;
        for(j=i+1;j<N;j++)
        {
        if(array[i]==array[j]&&array[i]!='\0')
        {   count++;
            array[j] = '\0';}
        }
       if(array[i]!='\0' && count>1)
    {
        printf("\n%d is %d times",array[i],count);
    }
    }

    }

