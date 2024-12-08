#include <stdio.h>
void converttobinary(int i);
void main(){
int x;
printf("Enter an integer\n ");
scanf("%d", &x);
printf("Binary form of %d is:",x);
converttobinary(x);
getch();
return 0;
}
void converttobinary(int y)
{
	if (y>1) {
	converttobinary(y/2);
	}
    printf("%2d",y%2);
}

