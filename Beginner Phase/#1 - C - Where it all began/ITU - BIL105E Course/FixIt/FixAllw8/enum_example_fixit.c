#include<stdio.h>
int main()
{
	// Yeni veri tipini olusturuyoruz
	// Ayrica yeni veri tipinden,
	// bir degisken tanimliyoruz.
	enum boolean {
		false = 0,
		true = 1
	} dogru_mu;

	dogru_mu = true;
	if( dogru_mu = true )
	{		printf( "Dogru\n" );
	}

	return 0;
}
