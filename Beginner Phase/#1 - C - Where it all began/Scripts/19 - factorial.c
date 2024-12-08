#include <stdio.h>

int main() {
  int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int factorial = 1;
  int num;
  int i;

scanf("%d",&num);
  for(i=0;i<num;i++){
    factorial *= array[i];
  }

  printf("%d! is %d.\n",num, factorial);
}
