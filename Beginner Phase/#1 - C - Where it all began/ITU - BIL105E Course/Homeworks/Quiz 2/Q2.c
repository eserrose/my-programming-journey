#include <stdio.h>

int main()
{
int bruce[51];
int i;
bruce[0] = 0.1;
bruce[1] = 5;
for(i=1;i<50;i++)
{
bruce[i+1] = bruce[i] - ((pow(bruce[i],2)-bruce[i]-1)*(bruce[i]-bruce[i-1]))/((pow(bruce[i],2)-bruce[i]-1)-(pow(bruce[i-1],2)-bruce[i-1]-1));
}
printf("Answer: %f",bruce[2]);
}
