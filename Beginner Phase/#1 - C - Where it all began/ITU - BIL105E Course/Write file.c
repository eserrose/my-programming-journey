#include <stdio.h>
#include <math.h>

int main()

{

FILE* f;

f = fopen("text.txt","w");

fprintf(f, "This is a test for fprintf\n");
fputs("This is a test for fputs",f);

fclose(f);

}
