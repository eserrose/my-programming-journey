#include <stdio.h>

int main()

{

FILE* f;
char sent[300];
f = fopen("text.txt","r");
fscanf(f,"%s",sent);
printf("1: %s\n",sent);

fscanf(f,"%s",sent);
printf("2: %s\n",sent);

printf("\n****SPARTAAAAA****\n\n");

fgets(sent,300,f);
printf("3: %s\n",sent);

fgets(sent,300,f);
printf("4: %s\n",sent);
fclose(f);


}
