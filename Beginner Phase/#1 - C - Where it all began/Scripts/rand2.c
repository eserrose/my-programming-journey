#include <stdio.h>
#include <time.h>

int main()
{
int N[5],i;

srand(time(NULL));

for(i=0;i<5;i++)
{
N[i] = rand()%5 +1;
}

  for (i = 0; i < 5; i++) {
      	printf("A random number: %d\n",N[i]);
      	}

}



