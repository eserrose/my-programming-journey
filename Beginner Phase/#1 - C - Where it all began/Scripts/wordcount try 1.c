#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main()

{
int count = 0,i,len;
char sen[200];
int found_letter = false;

printf("Enter your sentence: ");
gets(sen);
len = strlen(sen);

for(i=0;i<len;i++)
{
    if(sen[i]==' ')
        {found_letter = false;}
    else
        {if(found_letter == false)
            count++;
            found_letter = true;
            }

}

printf("\nThere are %d words in your sentence",count);
}
