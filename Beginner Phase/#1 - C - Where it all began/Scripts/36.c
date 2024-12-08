#include <stdio.h>

int main()

{

int c;
c = ' ';  //now c has the ASCII value of Space
printf("Enter a character:\n");

while(c != 'x') //while c is not equal to x's ASCII value
    {
c=getc(stdin); //same as scanf BUT ONLY A SINGLE CHARACTER AND AN INTEGER (THE ASCII VALUE)
putchar(c); //reads the ACII value and puts the char
//printf("%c",c);

}
printf("\nBye");
return 0;


}
