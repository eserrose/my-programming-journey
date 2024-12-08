#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("Enter a number between 1-10 to break the loop\n");
printf("Good luck");

do{
printf("\nNumber:");
scanf("%d",&n);

if(n==3)
{printf("\nLucky you!");
exit(0);
}
else if(n>9 || n<1)
{printf("\nARE YOU AN IDIOT");
continue;}

else
{printf("\nTry again");}

}while(n<n+1);


}
