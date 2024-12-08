#include <stdio.h>

int main()

{
int x;
scanf("%d",&x);

printf("%s",(x==2)?"X equals 2":"X is not 2");

int y;
y = sizeof(int);
(y==4)?printf("\nInt data has 4 bytes"):printf("\nInt data has %d bytes",y);
}
