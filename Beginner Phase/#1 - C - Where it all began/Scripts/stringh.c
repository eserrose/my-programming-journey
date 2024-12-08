#include <stdio.h>
#include <string.h>
int main()

{

printf("Okay then this program will be about strings");
char word[50];
char copy[50];
int length;
char sent[200];

printf("\nType something: ");
scanf("%[^\n]%*c",&word);
//fgets(name,100,stdin);
puts(word);
strcpy(copy,word);
printf("\nReverse is: %s",strrev(copy));
printf("\nUpper case: %s",strupr(word));
printf("\nLover case: %s",strlwr(word));
printf("\nEnter your name and year of birth: ");
char name[30];
char year[20];
scanf("%s%s",&name,&year);
strncat(name,year,2);
printf("\nWelcome %s",name);

int i,wordcount = 0;

system("CLS");
printf("Enter a sentence: ");
getchar();
fgets(sent,sizeof(sent),stdin);
length = strlen(sent);
printf("\nLength is %d",length-1);

for(i=0;i<length;i++)
{
    if(sent[i]==' ' && sent[i+1]!=' ')
    wordcount++;
}
if(wordcount>1)
{
    printf("\nWord count is: %d",wordcount+1);
}
else{printf("\nGet lost");}
}
