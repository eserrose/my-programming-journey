#include <stdio.h>
int main()

{
 int num;


 num = 3;
 printf("%d && %d yields %d\n",(num%2 == 0), (num%3 == 0), (num%2 == 0) && (num%3 == 0));

 num = 6;
 printf("%d && %d yields %d\n",(num%2 == 0), (num%3 == 0), (num%2 == 0) && (num%3 == 0));
}
