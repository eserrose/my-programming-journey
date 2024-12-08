#include <stdio.h>


int main()
{

int N,one,reversed=0;
printf("Enter a number: ");
scanf("%d",&N);
int n = N;
while(n!=0) //loop continues until n is zero
{
one = n%10;  //this will give us the number in ones place
reversed = reversed*10 + one; //the value in ones place gets multiplied by ten each time the loop starts again
n /= 10; //since our value is an integer, this equation will always get the next digit in the ones place
}

printf("\nReversed number is %d ",reversed);

if(reversed==N)
printf("\nYour number is palindrome!");

}
