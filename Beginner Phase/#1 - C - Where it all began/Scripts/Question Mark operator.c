#include <stdio.h>
int main()

{
int x;

x = sizeof(int);
printf("%s\n",(x==2)?"The int data type has 2 bytes" : "Int doesn't have 2 bytes");
/* Compares x with 2. Since the int data type has 4 bytes, it is not 2.
Thus the ? operator sends us to the second statement after ":" */

printf("\n? works like if-else.");
printf("\n Like, (x==5)?T:F evaluates to T if x equals to 5\n");

printf("Now enter something:");
int y;
y = getc(stdin);
(y=='5')?printf("Correct"):printf("Nope");

printf("\nAgain:");
int w;
scanf("%d",&w);
w==3?printf("HAIL"):printf("meh");






}
