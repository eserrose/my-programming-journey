#include <stdio.h>

int main()

{
int n = 225;
int b = 5;
float c = 45.55;
double d = 666;
double f = 55555;
char sex;
long int y;
short int z;


printf("Size of int is: %d-byte\n", sizeof(int));
printf("Size of int is: %d-byte\n", sizeof(n));
printf("Size of int is: %d-byte\n", sizeof(b));
printf("Size of float is: %d-byte\n", sizeof(float));
printf("Size of float is: %d-byte\n", sizeof(c));
printf("Size of double is: %d-byte\n", sizeof(double));
printf("Size of double is: %d-byte\n", sizeof(f));
printf("Size of double is: %d-byte\n", sizeof(d));
printf("Size of char is: %d-byte\n", sizeof(char));
printf("Size of char is: %d-byte\n", sizeof(sex));
printf("Size of long int is: %d-byte\n", sizeof(long int));
printf("Size of short int is: %d-byte\n", sizeof(short int));
printf("Size of long double is: %d-byte\n", sizeof(long double));
printf("Size of short is: %d-byte\n", sizeof(short));
printf("%%u means ""unsigned int""\n");
printf("%%hd means ""short int""\n");
printf("%%ld means ""long int""\n");

}
