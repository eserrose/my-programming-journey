#include <stdio.h>
#include <stdarg.h>


double ortalama( int, ... );  // 3 nokta, gelecek arg�man say�s�n�n belirsiz oldu�unu belirtiyor

int main()
{

double w = 37.5, x = 22.5, y = 1.7, z = 10.2;

printf( "%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
"w = ", w, "x = ", x, "y = ", y, "z = ", z );   //ba�a w= yazmak yerine %s yaz�p sona koymu�uz

printf( "%s%.3f\n%s%.3f\n%s%.3f\n",
        "w ve x'in ortalamasi : ", ortalama( 2, w, x ),
       "w, x ve y 'in ortalamasi : ", ortalama ( 3, w, x, y ),
       "w, x, y ve z 'in ortalamasi : ", ortalama( 4, w, x, y, z ) );
       return 0;}


       double ortalama( int i, ... )
       {  double toplam = 0;
           int j;

           va_list ANNEN; //int, double vs. gibi bir tpye olan va_list ile ANNEN'i tan�mlad�k ki kullanabilelim

           va_start( ANNEN, i ); //va_list ile bildirilen eleman'a (ANNEN) ilk de�eri (i) atar

           for ( j = 1; j <= i; j++ )

            toplam += va_arg( ANNEN, double ); //va_arg ise, bildirilen nesneyi (ANNEN9, bir sonraki nesne ile (x) de�i�tirir. j=0 iken w, j=1 iken x vs.

           va_end( ANNEN ); //va_starttan normal fonksiyona d�n��

           return toplam / i; }





