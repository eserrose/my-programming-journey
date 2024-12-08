#include <stdio.h>

void main()

{

/*int array[2][3];
array[0][0] = 1;
array[0][1] = 2;
array[0][2] = 3;
array[1][0] = 4;
array[1][1] = 5;
array[1][2] = 6;*/


//or

int array[2][3]={1,2,3,4,5,6};


int i,j;

for(i=0;i<2;i++)
{printf("\n");
for(j=0;j<3;j++)
    printf("%6d",array[i][j]);
}

printf("\n");


}
