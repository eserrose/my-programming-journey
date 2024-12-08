#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int mynum;
    char mychar;
    printf("Enter a number and the format:");
    scanf("%d %c",&mynum,&mychar);
    fonk(mynum,mychar);
    system("PAUSE");
}

void fonk (int sayi,char c){

     if(c=='d')
     printf("%d\n",sayi);
     else if(c=='o'||c=='O')
     printf("%o\n",sayi);
     else if(c=='x'||c=='X')
     printf("%x\n",sayi);
     else
     printf("Yanlis format girdiniz\n");
}


