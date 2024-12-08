#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *ptr,*ptr1,*ptr2;
    size_t size1,size2,size3;
    size1 = 30;
    size2 = 30;
    size3 = 30;

    ptr1 = (char*)malloc(size1);

    if(ptr1==NULL)
    {
        printf("Insufficient memory");
        exit(0);
    }

    strcpy(ptr1,"Calling malloc\n");

    ptr2 = (char*)realloc(ptr1,size2);

    if(ptr2==NULL)
    {
        printf("Not enough memory");
        exit(0);
    }

    strcat(ptr2,"Realloc is also called");

    printf("%s",ptr2);

    free(ptr2);

    ptr = (char*)calloc(size3,sizeof(char));

    if(ptr==NULL)
    {
        printf("NO MEMORY");
        exit(0);
    }

    strcat(ptr,"\nCalloc is here too");

    printf("%s",ptr);

    free(ptr);

    return(0);


}
