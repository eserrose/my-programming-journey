//karakterleri text dosya sýna kaydedebiliriz
#include<stdio.h>
void main(){ 
FILE *DosyaOku;
DosyaOku = fopen("HELLO.txt","w");
fputc('H',DosyaOku );
fputc('E',DosyaOku );
fputc('L',DosyaOku );
fputc('L',DosyaOku );
fputc('O',DosyaOku );
fclose(DosyaOku);
printf("Press ENTER to exit");
getch();
}
