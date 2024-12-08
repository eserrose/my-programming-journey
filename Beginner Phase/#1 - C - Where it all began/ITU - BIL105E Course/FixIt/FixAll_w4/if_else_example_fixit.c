#include <stdio.h>
#include <stdlib.h>

int main()
{
//AMACIM ASCII TABLOSUNA BIR BAKMAN NE IDI O DEC HEX CHAR DEGERLERI?
//My purpose is to make you look at ASCII TABLE AGAIN
char girilenDeger1;
char girilenDeger2;

printf ("Enter 2 character\n\n" ) ;
puts ("1st character?\n\n") ;
scanf("%c", &girilenDeger1);
printf ("1st character %c \n\n",girilenDeger1) ;
puts ("2nd character?\n\n") ;
girilenDeger2=getch();
printf ("2nd character %c \n\n",girilenDeger2) ;


	if (girilenDeger1 > girilenDeger2)
	{
	printf ("Entered character %d, is bigger than %d \n",girilenDeger1,girilenDeger2) ;
	printf ("Entered character %f, is bigger than %f \n",girilenDeger1,girilenDeger2) ;
	printf ("Entered character %c, is bigger than %c \n",girilenDeger1,girilenDeger2) ;
	}
	else if(girilenDeger1 < girilenDeger2){
	printf ("Entered character %d, is smaller than %d\n",girilenDeger1,girilenDeger2) ;
	printf ("Entered character %f, is smaller than %f\n",girilenDeger1,girilenDeger2) ;
	printf ("Entered character %c, is smaller than %c\n",girilenDeger1,girilenDeger2) ;
	}
	else {
	printf ("Entered character %d, is equal to %d\n",girilenDeger1,girilenDeger2) ;
	printf ("Entered character %f, is equal to %f\n",girilenDeger1,girilenDeger2) ;
	printf ("Entered character %c, is equal to %c\n",girilenDeger1,girilenDeger2) ;

	}

    printf ("\n What does this mean? LOOK ASCII TABLE PLEASE\a\n\n") ;

system("PAUSE");
    //getch();
    //getchar();
return 0;
}
