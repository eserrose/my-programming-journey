#include <stdio.h>

#define N 10
void degistir (int *, int *);
main()
{
   int s[N];
   int i, k;
   printf("My array before ordering \n");
   for (i=0; i<N; i++) {
       s[i] = -i*i;
       printf("%d ",s[i]);
   }
   printf("\n");
   k=1;


   do {
      k=0;
      for (i=0; i<N-1; i++)
          if (s[i] > s[i+1]) {
             degistir (&s[i], &s[i+1]);
             k = 1;
          }
   } while (k);

   printf("My array after ordering \n");
   for (i=0; i<N; i++)
   printf("%d ",s[i]);
   printf("\n");
   getch();
}

void degistir (int *a, int *b)
{
  int gec;
  gec = *a;
  *a = *b;
  *b = gec;
}


