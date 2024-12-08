#include <stdio.h>
int maksimum(int,int,int);
void main(){
int a,b,c;
printf("Enter 3 integer\n ");
scanf("%d%d%d",&a,&b,&c);
printf("The biggest one is: \n",maksimum(a,b,c));
getch();
return 0;
}
maksimum(int x,int y,int z)
{
	if (x>y&&x>z) {
	return x;
	}
    else if (y>z){
	return y;
	}
    else {
	return z;
	}
}
