#include <stdio.h>

int main()
{
    printf("Enter a number to break the loop:");
    int number;

    do  //welcome to "do". This algorithm causes the program to chechk the parameters below (like if this is that) and keeps doing the same thing until the conditions are met
    {
         scanf("%d",&number);
        if(number==3){
        printf("\n\aLucky guess. Congratz!\n");
        break; //if I don't say break, it goes on and does the next thing, which is printing Nope.Try again
        }

    printf("Nope. Try again\n");}while(number<10);
    if(number>=10){printf("Number I said. NUMBER. YOU DON'T DESERVE THIS");}
    system("pause");
}
