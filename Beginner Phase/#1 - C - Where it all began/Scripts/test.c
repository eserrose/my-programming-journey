#include <stdio.h>
#define ARRAY_SIZE 5

int main (void) {
	int i, random_numbers [ARRAY_SIZE];
	int filled[ARRAY_SIZE] = {0};
	int random_number;

	srand( time(NULL) );

	for (i = 0; i < ARRAY_SIZE; i++) {
	     do {
	        random_number = rand() % ARRAY_SIZE;
	     } while (filled[random_number] == 1);

	     filled[random_number] = 1;
	     random_numbers[i] = random_number;
	} // for

   for (i = 0; i < ARRAY_SIZE; i++) {
      	printf("random_numbers[%d] = %d\n", i, random_numbers[i]);
   };

	return 0;
}
