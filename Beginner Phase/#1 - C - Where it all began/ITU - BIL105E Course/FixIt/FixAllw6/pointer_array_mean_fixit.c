#include <stdio.h>
#include <conio.h>
#define N 5
float ort (int *);

main()
{
   int s[N];
   int i, k;

   for (i=0; i<N; i++) {
       s[i] = i*i;
       printf("s[%d]: %d\n",i,s[i]);
   }
   printf("Ortalama :%f \n",ort(s));
   getch();

}

float ort (int *a)
{
  int i;
  float t = 0;

  for (i=0; i<N; i++)
      t = t + *a+i*i;//PROGRAM RUNS PREFECT BUT RESULT IS WRONG WHY?...

  return t/N;
}


