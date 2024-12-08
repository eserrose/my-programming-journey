/********************************************************************************
Student Name and Surname: Sercan Þahan
Student Number: 150140005
Lecture Name: BIL105E - Introduction to Scientific and Engineering Computing (C)
Homework 3
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80

int user_menu(void);
int set_ccs(char **ccs);
char *sub_string(char **ccs, int begin_index, int end_index);
char *remove_string(char **ccs, int begin_index, int end_index);
int insert_string(char **ccs, char *insert, int begin_index);

int main()
{
	int selection = 1;
	int array_size;
	int begin_index, end_index;
	char *ccs = NULL;
	char *sub, *removed, *inserted, *insert = NULL, *replaced;

	while (selection != 0)
	{
		selection = user_menu();
		switch(selection)
		{
			case 1:
				array_size = set_ccs(&ccs);
				break;
			case 2:
				if(ccs = NULL)
				{
					printf("You must set a CCS before doing anything else.\n");
					break;
				}
				printf("Enter Begin and End Index Number:\n");
				scanf("%d %d", &begin_index, &end_index);
				
				while(begin_index > end_index || end_index > array_size || begin_index > array_size)
				{
					printf("You Entered Invalid Numbers.\n\nEnter Begin and End Index Number:\n");
					scanf("%d %d", &begin_index, &end_index);
				}
				sub = sub_string(&ccs, begin_index, end_index);
				printf("\nCCS: %s", ccs);
				printf("Substring(%d , %d): %s\n\n", begin_index, end_index, sub);
				free(sub);
				break;
			case 3:
				if(ccs = NULL)
				{
					printf("You must set a CCS before doing anything else.\n");
					break;
				}
				printf("Enter Begin and End Index Number:\n");
				scanf("%d %d", &begin_index, &end_index);
				
				while(begin_index > end_index || end_index > array_size)
				{
					printf("You Entered Invalid Numbers.\n\nEnter Begin and End Index Number:\n");
					scanf("%d %d", &begin_index, &end_index);
				}
				removed = remove_string(&ccs, begin_index, end_index);
				printf("\nCCS:%s\n", ccs);
				printf("Removed String(%d , %d): %s\n\n", begin_index, end_index, removed);
				free(removed);
				break;
			case 4:
				if(ccs = NULL)
				{
					printf("You must set a CCS before doing anything else.\n");
					break;
				}
				printf("Enter the Begin Index where the new string begins:\n");
				scanf("%d", &begin_index);
				printf("%d", insert_string(&ccs, insert, begin_index));
				break;
			case 0:
				break;
			default:
				printf("\nYou Entered an Invalid Function.\n\n");
				selection = user_menu();
				break;
		}
	}
	
	printf("Goodbye!");
	return 0;
}

int user_menu(void)
{
	int selection;
	printf("1: Set Current Character Sequence\n2: Get Substring\n3: Remove Substring\n4: Insert\n5: Replace\n0: Exit Program\n\nEnter your choice:");
	scanf("%d", &selection);
	return selection;
}

int set_ccs(char **ccs)
{
	char *tmp = (char*)malloc(SIZE * sizeof(char));//allocates memory for tmp
	
	if (tmp == NULL)
	{
		return -1;
	}
	
	if (*ccs != NULL)//removes contents of CCS if it is not empty
	{
		free(*ccs);
	}

	printf("Enter CCS:\n");
	getchar();
	fgets(tmp, SIZE, stdin);//gets CCS
	
	*(tmp + strlen(tmp)) = '\0';
	tmp = (char*)realloc(tmp, strlen(tmp) + 1);//reallocates memory for tmp
	
	*ccs = tmp;//assigns contents of tmp to contents of CCS

	return strlen(tmp);
}

char *sub_string(char **ccs, int begin_index, int end_index)
{
	int counter;
	int len = end_index - begin_index + 1;
	char *sub;
	
	sub = (char*)malloc(SIZE * sizeof(char));//allocates memory for sub string
	
	for (counter = 0; counter < len; counter++)//assigns wanted contents to sub string
	{
		*(sub + counter) = *(*ccs + begin_index + counter);
	}
	
	*(sub + len) = '\0';//makes last element of sub string null character
	return sub;
}

char *remove_string(char **ccs, int begin_index, int end_index)
{
	int counter, counter1, counter2, tmp_index = begin_index;
	int len1 = end_index - begin_index + 2;
	char *removed, *tmp_char;
	
	removed = (char*)malloc(SIZE * sizeof(char));//allocates memory for removed string
	tmp_char = (char*)malloc(SIZE * sizeof(char));//allocates memory for temporary string
	
	for(counter = 0; counter<= SIZE; counter++)//assings contents of CCS to temporary string
	{
		*(tmp_char + counter) = *(*ccs + counter);
	}
		
	for (counter1 = 0; counter1 <= len1; counter1++)//assigns wanted elements from CCS to removed string
	{
		*(removed + counter1) = *(*ccs + begin_index + counter1);
 	}
 	
 	while(begin_index < strlen(tmp_char))//removes characters from CCS
	{
		*(*ccs + begin_index) = '\0';
		begin_index++;
	}
	
	begin_index = tmp_index;
	counter2 = end_index + 1;

	while(*(tmp_char + counter2) != '\0')
	{
		*(*ccs + begin_index) = *(tmp_char + counter2);//moves contents of CCS with help of temporary string
		counter2++;
		begin_index++;
	}
	
	if(*(removed + len1 - 1) = '\0')
	{
		return removed;
	}
	else
	{
		*(removed + len1) = '\0';
		return removed;
	}
}

int insert_string(char **ccs, char *insert, int begin_index)
{
	int counter1 = 0, counter2 = 0;
	char **inserted;
	char *tmp = (char*)malloc(SIZE * sizeof(char));//allocates memory for temporary string
	
	if (tmp == NULL)
	{
		return -1;
	}
	
	printf("Enter a New String for Insertion:\n");
	getchar();
	fgets(tmp, SIZE, stdin);//gets new string for insertion
	
	*(tmp + strlen(tmp)) = '\0';
	tmp = (char*)realloc(tmp, strlen(tmp) + 1);//rellocates memory for temporary string
	
	while(*(*ccs + counter2) != '\0')
	{
		counter2++;
	}
	
	ccs = (char**)realloc(ccs, counter2 + 1);//reallocate memory for CCS to inserting string
	
	while(counter1 <= strlen(tmp) - 1)//assigns new values to CCS
	{
		*(*ccs + begin_index) = *(tmp + counter1);
		begin_index++;
		counter1++;
	}
	
	*inserted = tmp;//assigns inserted values to inserted string
	return strlen(tmp);
}

