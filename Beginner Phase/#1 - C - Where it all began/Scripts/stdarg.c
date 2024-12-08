#include <stdio.h>
#include <stdarg.h>


double ortalama( int, ... );  // 3 nokta, gelecek argüman sayýsýnýn belirsiz olduðunu belirtiyor

int main()
{

double w = 37.5, x = 22.5, y = 1.7, z = 10.2;

printf( "%s%.1f\n%s%.1f\n%s%.1f\n%s%.1f\n\n",
"w = ", w, "x = ", x, "y = ", y, "z = ", z );   //baþa w= yazmak yerine %s yazýp sona koymuþuz

printf( "%s%.3f\n%s%.3f\n%s%.3f\n",
        "w ve x'in ortalamasi : ", ortalama( 2, w, x ),
       "w, x ve y 'in ortalamasi : ", ortalama ( 3, w, x, y ),
       "w, x, y ve z 'in ortalamasi : ", ortalama( 4, w, x, y, z ) );
       return 0;}


       double ortalama( int i, ... )
       {  double toplam = 0;
           int j;

           va_list ANNEN; //int, double vs. gibi bir tpye olan va_list ile ANNEN'i tanýmladýk ki kullanabilelim

           va_start( ANNEN, i ); //va_list ile bildirilen eleman'a (ANNEN) ilk deðeri (i) atar

           for ( j = 1; j <= i; j++ )

            toplam += va_arg( ANNEN, double ); //va_arg ise, bildirilen nesneyi (ANNEN9, bir sonraki nesne ile (x) deðiþtirir. j=0 iken w, j=1 iken x vs.

           va_end( ANNEN ); //va_starttan normal fonksiyona dönüþ

           return toplam / i; }





