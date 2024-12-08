#include <stdio.h>
#include <string.h>

int main()

{
int count=0,len,i;
char sent[200];
printf("Enter your sentence: ");
gets(sent);
len = strlen(sent);

for(i=0;i<len;i++)
{
    if(sent[i] == ' ')
    count++;

}

printf("\nNumber of words is %d",count+1);
}
