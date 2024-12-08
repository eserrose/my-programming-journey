#include <stdio.h>
int main ()
{
   int c = 0;
   char ch, s[1000];

   printf("Input a string:\n");
   gets(s);

   while (s[c] != '\0')
    {
      ch = s[c];
      if (ch >= 'A' && ch <= 'Z')
         s[c] +=32;
      else if (ch >= 'a' && ch <= 'z')
         s[c] -=32;
      c++;
   }

   printf("%s", s);

   return 0;
}
