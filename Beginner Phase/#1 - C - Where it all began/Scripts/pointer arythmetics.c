#include <stdio.h>

void addone(int *n);


int main()
{
int n = 0;
printf("Before: %d",n);
addone(&n);
printf("\nAfter: %d",n);


}

void addone(int *n)
{
(*n)++;

}
