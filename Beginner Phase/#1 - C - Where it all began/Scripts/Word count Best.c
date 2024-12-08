#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()

{
    char sen[200];
    int letter = false;
    int i,count=0,len;

    printf("Enter a sentence: ");
    gets(sen);
    len = strlen(sen);

    for(i=0;i<len;i++)
    {
        if(sen[i]==' ')
        {
            letter = false;
        }
        else
        {
            if(letter==false)
            {
                letter = true;
                count ++;
            }
        }

    }

    printf("\nThere are %d words in your sentence",count);
}
