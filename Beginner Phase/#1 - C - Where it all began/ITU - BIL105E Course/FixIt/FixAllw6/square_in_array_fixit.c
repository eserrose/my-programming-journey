#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int dizi[100];

    for(i=0;i<100;i++)
    {
       dizi[i]=i*i;
    }
    i=0;
    while(i<100)
    {
    printf("dizi[%d]= %d\n",i,dizi[i]);
    i++ ;
    }

  //system("PAUSE");
  getchar();
  return 0;
}
