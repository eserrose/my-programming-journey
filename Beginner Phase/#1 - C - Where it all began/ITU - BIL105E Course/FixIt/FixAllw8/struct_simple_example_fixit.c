#include<stdio.h>
int main( void )
{
	// kisi adinda bir yapi olusturulup
	// baslangic degerleri 'Ali' ve '167'
	// olacak sekilde atanir.
	struct {
		char isim[30];
		int boy;
	} kisi = { "Ali", 175 };
	printf( "İsmi: %s kilosu : %d\n", kisi.isim ,kisi.boy );
	return 0;
}
