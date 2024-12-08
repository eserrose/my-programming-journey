#include <stdio.h>
#define N 1
int main (void)
{
    char cumle[N][20];
    int i;
    printf("Enter your sentence:");
        for(i=0;i<N;++i){
    scanf("%s",cumle[i]);
    };
    func(cumle);
    getchar();
    return 0;
}

void func(char (*y)[20])
{
int i,j;
for(i=0;i<N;++i)
{
  for(j=0;y[i][j]!='\0';++j)
  {
  if(y[i][j]=='C')
  y[i][j]='c';
  }
printf("%s ",y[i]);
}
}
