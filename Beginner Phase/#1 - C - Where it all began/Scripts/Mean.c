
#include <stdio.h>
#include <stdlib.h>

int main(){

  int n,i;

        printf("\nEleman sayýsýný girin: ");
        scanf("%d",&n);

float x[n], toplam, ort;


       for(toplam =0.0, i=0; i<n; i++){
          printf("%d. eleman: ",i+1);
          scanf("%f",&x[i]);
          toplam += x[i];
       }

       ort = toplam / n;

       printf("Ortalama = %f\n",ort);


 return 0;
}
