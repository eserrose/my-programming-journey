#include <stdio.h>
int main()
{
int i;

for ( i = 1; i <= 14; i++ ) {
if ((i <= 4) || (i==14))
printf("%d mumdur\n", i);
}
printf("Bana bir bade doldur\n");
printf("Bu ne guzel dugundur, ");

for ( i = 1; i <= 3; i++ ){
printf("Ha ninnah ");
if (i != 2) printf("\n");
}

getchar();
}
