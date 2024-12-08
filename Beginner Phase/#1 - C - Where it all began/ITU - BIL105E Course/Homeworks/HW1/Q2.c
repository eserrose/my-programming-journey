#include <stdio.h>

int main(void)
{
    int i;
    int m;
   printf("       MULTIPLICATION TABLE\n");

    for(i=1;i<=6;++i)
    {
for(m=1;m<=6;++m)
        printf("%#3d   ",i * m);
        printf("\n");
    }
system("pause");
return 0;


}
