#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int F;
    F=1;
    int select;
    printf("\n   Faktoriyel hesabina hosgeldiniz   \n");
    printf("\n   Welcome to factorial Calculation   \n");
    printf("\n   For English press 9 or For Turkish press 3\n");
    scanf("%d",&select);

	switch(select){

    case 3:
    printf("\n   -------------------------------   \n");
    printf("Kac faktoriyel hesaplanacak? \n");
    scanf("%d",&n);
    while(n>1){
               F=F*n;
               n=n-1;
    }
    printf("\n Faktoriyel isleminin sonucu: %d\n",F);   break;

    case 9:

    printf("\n   -------------------------------   \n");
    printf("What is the number for factorial? \n");
    scanf("%d",&n);
    while(n>1){
               F=F*n;
               n=n-1;
    }
    printf("\n Result of factorial: %d\n",F);   break;

    default:
    printf("\n  Are you blind sir/matmazel?   \n \n");

	}
    system("PAUSE");
    //getch();
    //getchar();
  return 0;
}
