#include <stdio.h>
#include <stdlib.h>
main()
{
  int i;
  int *iptr;

  i = 5;
  iptr = &i;

  printf(" i = %d and the adress of i which is (&i) : %p\n", i, &i);//CAREFUL FOR %p to write pointers
  printf(" inside of the pointer (*iptr) %d and iptr  :  %p\n", *iptr, iptr);
  getch();
}
