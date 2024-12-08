#include <stdio.h>
#include <string.h>

int main()

{
int i,len;
int count = 0;
char sen[5000];
printf("Enter a sentence: ");
gets(sen);
len = strlen(sen);

for(i=0;i<len;i++)
{
if(sen[i]==' ')
count ++;
}

printf("\nWord count is: %d",count+1);
}
