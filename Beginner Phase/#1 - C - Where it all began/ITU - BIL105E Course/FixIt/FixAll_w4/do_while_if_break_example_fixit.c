#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\n   Guess a number between 1-10 and break the loop Good luck!! \n");
    printf("\n   -------------------------------   \n");

    do{
    printf("Enter a number \n");
    scanf("%d",&n);
         if(n==4){
            printf("Lucky you!! \n Bye bye\n");
         	break;
		 }
    printf("You failed!! try again\n");
    }while(n<=10);
    if (n>=10){
    printf("\nUUps Number is bigger than 10 Einstein?!! You lost your chance, closing...\a\n\n");
	}
    system("PAUSE");
    //getch();
    //getchar();
  return 0;
}
