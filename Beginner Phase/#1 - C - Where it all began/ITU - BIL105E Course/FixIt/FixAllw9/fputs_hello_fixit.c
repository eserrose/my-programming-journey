
//fputs() dosyaya katar yazdýrmaya yaramaktadýr.
#include<stdio.h>
void main()
{ 
char dizgi[30] ={"getting married"};

dosya_yaz = fopen("invitation.txt","w");
fputs("Ali &\tAyþe\n",dosya_yaz);
fputs("at this weekend\n",dosya_yaz);
fputs(dizgi,dosya_yaz);
fclose(dosya_yaz);
printf("Press ENTER to exit");
getchar();
}
