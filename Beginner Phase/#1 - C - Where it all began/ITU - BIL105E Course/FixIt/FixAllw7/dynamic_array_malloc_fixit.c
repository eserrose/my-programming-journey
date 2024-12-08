/*Dinamik dizi ile ortalama hesab� */

#include <stdio.h>
#include <stdlib.h>

int main(){

  int n,i;
  float *x, toplam, ort;

  while(1){
        /* dizinin eleman say�s� okunuyor */
        printf("\nEleman say�s�n� girin: ");
        scanf("%d",&n);

        /* eleman say�s� <= 0 ise d�g�den ��k */
        if( n<=0 )
          break;

        /* bellekten yer isteniyor */
        x = (float *)  malloc( sizeof(float)*n );

       /* istenen yer ayr�ld� m�? */
       if( x == NULL ){
         puts("Yetersiz bellek alan�");
         exit(1);
       }

       /* elemanlar tek tek belle�e yaz�l�p toplamlar� hesaplan�yor */
       for(toplam =0.0, i=0; i<n; i++){
          printf("%d. eleman: ",i+1);
          scanf("%f",&x[i]);
          toplam += x[i];
       }

       ort = toplam / n;

       printf("Ortalama = %f\n",ort);

       /* ayr�lan alan bo�alt�l�yor */
       free(x);
       }

 return 0;
}
