#include <stdio.h>

int main()

{
    int factorial = 1;
    int n;
    int j;
    int array[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {

        factorial *= array[j]; //or factorial = factorial * array[j]
//printf("%d! is %d",n,factorial); if I write this here, it will print all the numbers in the arry from 5 to 16
    }
printf("%d! is %d",n,factorial);
    return 0;
}
