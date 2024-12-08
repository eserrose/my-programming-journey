#include <stdio.h>
#include <string.h>

int main()
{
const char *invalid_characters = "hz";
   char *mystring = "This is my test string";
   char *c = mystring;
   while (*c)
   {
       if (strchr(invalid_characters, *c))
       {
          printf("%c is in \"%s\"\n", *c, mystring);
       }

       c++;
   }

   return 0;


}
