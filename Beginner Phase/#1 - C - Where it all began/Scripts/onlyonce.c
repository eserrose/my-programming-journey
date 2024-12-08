#include <stdio.h>
#include <stdbool.h>
int main()
{
static bool initialized ;
if (!initialized) {
   initialized = true;
      printf("Try");
      // do the initialization part
}
getch();
}
