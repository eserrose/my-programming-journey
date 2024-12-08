 #include <stdio.h>

int main()
{
int *int0;
int *int1;
int *int2;
int *int3;
int *int4;
int intarray[5];
int0=&intarray[0];
int1=&intarray[1];
int2=&intarray[2];
int3=&intarray[3];
int4=&intarray[4];

char *c0;
char *c1;
char *c2;
char *c3;
char *c4;
char carray[5];
c0=&carray[0];
c1=&carray[1];
c2=&carray[2];
c3=&carray[3];
c4=&carray[4];

float *f0,*f1,*f2,*f3,*f4;
float farray[5];
f0=&farray[0];
f1=&farray[1];
f2=&farray[2];
f3=&farray[3];
f4=&farray[4];

double *d0,*d1,*d2,*d3,*d4;
double darray[5];
d0=&darray[0]; d1=&darray[1]; d2=&darray[2]; d3=&darray[3]; d4=&darray[4];
printf("integer    character  float      double\n");
printf("%p   %p   %p   %p\n", int0,c0,f0,d0);
printf("%p   %p   %p   %p\n", int1,c1,f1,d1);
printf("%p   %p   %p   %p\n", int2,c2,f2,d2);
printf("%p   %p   %p   %p\n", int3,c3,f3,d3);
printf("%p   %p   %p   %p\n", int4,c4,f4,d4);

}
