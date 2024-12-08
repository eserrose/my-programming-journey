#include <stdio.h>


int factorial(int);
int main()

{
int i,n;

printf("Factorial until what? ");
scanf("%d",&n);

for(i=0;i<n;i++)

{printf("%d!=%d\n",i,factorial(i));}

}

int factorial(int n)
{
    int f = n;
    if(n>1)
    { f*=factorial(n-1);}
    /*This part is a little tricky. let's say i=2.Since 2>1, it will be like
    f=2*(f=1, 1 is not bigger than 1 so this paranthesis will return 1) == f=2*1, then this fuction returns 2 */
    return f;

}
