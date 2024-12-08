#include <stdio.h>

int main()

{
int i;
for(i=0;i<16;i++){
printf("%x    %X       %d     \n",i,i,i);
}

P:printf("Continue?\n");

char ans[5];
scanf("%s",&ans);

if(strncmp(ans,"yes",5)==0 || strncmp(ans,"Yes",5)==0 )
{
    printf("yay\n");
    int a,j;
    for(a=0,j=0;a<10,j<10;a++,j++){
        printf("a=%d\nj=%d\na+j=%d\n",a,j,a+j);
        printf("\n");}
}

else {printf("Let me ask again\n\n\a");
goto P;}
return 0;
}
