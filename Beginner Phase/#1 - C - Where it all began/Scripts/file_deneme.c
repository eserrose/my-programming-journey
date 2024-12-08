#include <stdio.h>
#include <stdint.h>
void main(){

const uint8_t anarray[5] = {1,2,3,4,0xAD};
char ch;
FILE *fil;
fil = fopen("filedeneme.txt","a+");
int i;
for(i=0;i<5;i++)
{
    fputc(anarray[i],fil);
}
//fputc(anarray,fil);
fclose(fil);

fil = fopen("filedeneme.txt","r");
while((ch = fgetc(fil)) != EOF)
      {printf("%X", (unsigned char)ch);
      printf("\n");}

fclose(fil);
}
