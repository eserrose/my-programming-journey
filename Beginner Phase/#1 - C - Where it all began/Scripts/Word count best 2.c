#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
char sen[100];
int i,count=0,len;
int str = false;

one:printf("Enter sentence: ");
gets(sen);
len = strlen(sen);

for(i=0;i<len;i++)
{

if(sen[i]==' ')
{ str = false;   }

else
{
if(str==false)
{
    str = true;
    count++;
}

}

}

printf("\nThere are %d words in your sentence\n",count);

count=0;
str=false;
goto one;
}
