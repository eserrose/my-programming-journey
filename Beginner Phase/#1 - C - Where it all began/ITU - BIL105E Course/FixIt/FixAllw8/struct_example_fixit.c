#include<stdio.h>
int main( void )
{
	struct {
		int yil;
		int ay;
		int gun;
	} siz, erkek_kardes;

	printf( "Do�um g�n�n�z� giriniz> \n");
	scanf( "%d-%d-%d",	&siz.gun,
				&siz.ay,
				&siz.yil );

	printf( "Erkek karde�iniz>\n " );
	scanf( "%d-%d-%d", 	&erkek_kardes.gun,
				&erkek_kardes.ay,
				&erkek_kardes.yil );

	printf( "Siz> %d-%d-%d\ ",siz.gun,siz.ay,siz.yil );
	printf("Erkek karde�iniz> -%d-%d\n",erkek_kardes.gun,erkek_kardes.ay,erkek_kardes.yil);
	return 0;

}
