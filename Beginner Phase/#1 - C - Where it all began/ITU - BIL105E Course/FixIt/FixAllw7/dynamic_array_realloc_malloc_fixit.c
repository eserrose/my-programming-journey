#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /* Define required variables */
    char *ptr1,*ptr2,*ptr;
    size_t length1, length2,length;
    /* Define the amount of memory required */
    length = 20;
    length1 = 20;
    length2 = 20;
    /* Allocate memory for our string */
    ptr1 = (char *)malloc(length1);
    /* Check to see if we were successful */
    if (ptr1 == NULL)    {
        /* We were not so display a message */
        printf("Could not allocate required memory\n");
        /* And exit */
        exit(1);
	}
    /* Copy a string into the allocated memory */
    strcpy(ptr1, "C malloc is called\n");
    /* Oops, we wanted to say more but now do not
     have enough memory to store the message! */
    /* Expand the available memory with realloc */
    ptr2 = (char *)realloc(ptr1, length2);
    /* Check to see if we were successful */
    if (ptr2 == NULL)    {
        /* We were not so display a message */
        printf("Could not re-allocate required memory\n");
        /* And exit */
        exit(1);
    }
    /* Add the rest of the message to the string */
    strcat(ptr2, "C realloc is called");
    /* Display the complete string */
    printf("%s\n",ptr2);
    /* Free the memory we allocated */
    free(ptr2);
    /* Allocate and zero memory for our string */
    ptr = (char *)calloc(length, sizeof(char));
    /* Check to see if we were successful */
    if (ptr == NULL){
        /* We were not so display a message */
        printf("Could not allocate required memory\n");
        /* And exit */
        exit(1);
    }
    /* Copy a string into the allocated memory */
    strcpy(ptr, "C calloc is called");
    /* Display the contents of memory */
    printf("%s\n", ptr);
    free(ptr);
    return 0;
}
