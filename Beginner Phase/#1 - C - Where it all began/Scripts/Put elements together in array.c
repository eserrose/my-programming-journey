#include <stdio.h>

void main()

{

char array[7] = {'F','U','C','K','Y','O','U'};
int i;

for(i=0;i<7;i++)
{
    printf("array[%d] contains %c\n",i,array[i]);

}

printf("\nPut together (Method I): \n");
for(i=0;array[i]!= '\0' && i<7;i++)
        {printf("%c",array[i]);}

printf("\nMethod II: \n");
printf("%s\n",array);

return 0;

}
