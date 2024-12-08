#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int F;
    F=1;
    printf("\n   faktoriyel hesabina hosgeldiniz   \n");
    printf("\n   -------------------------------   \n");
    printf("Kac faktoriyel hesaplanacak? \n");
    scanf("%d",&n);
    while(n>1){
               F=F*n;
               n=n-1;
    }
    printf("\n Faktoriyel isleminin sonucu: %d\n",F);
    system("PAUSE");
    //getch();
    //getchar();
  return 0;
}
