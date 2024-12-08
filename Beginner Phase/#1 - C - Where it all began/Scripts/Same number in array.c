#include <stdio.h>
#define N 5
int main()

{
int i,n;
int array[N];

for(i=0;i<N;i++)
{   printf("Enter number %d: ",i+1);
    scanf("%d",&array[i]);
    printf("\n");
}

int j,count;

for(i=0;i<N;i++)

  {

    count = 1;

    for(j=i+1;j<N;j++)
{
    if(array[i]==array[j]&&array[i]!='\0')
    {
        count++;
        array[j] = '\0';
    }
}
    if(array[i]!='\0' && count>1)
    {
    printf("There are %d times %d in the array",count,array[i]);
    }

  }
}
