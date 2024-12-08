#include <stdio.h>
#include <string.h>

main() {
int i,wordcount=0,length;
char sentence[50];
printf("Enter your sentence which has 1 space distance between each word:\n");
printf("Example: how are you\n");
gets(sentence);  // katari (string array) aliyoruz
length=strlen(sentence); // ozel fonksiyon (strlen) yardimi ile cumlenin uzunlugunu buluyoruz

   for(i=0; i<length; i++)
    {

        if (sentence[i]==' ')
	    {
         wordcount++;
	    }

    }
printf("Wordcount= %d \n",wordcount+1);
getch();
}
