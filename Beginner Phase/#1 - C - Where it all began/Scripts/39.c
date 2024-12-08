#include <stdio.h>

int main()

{
int a = 1;
int b = 12;
int c = 123;
float n;
float pw;
char ans[10];
printf("%3d\n%-3d\n%3d\n",a,b,c);
printf("\n Mini calculator");
printf("\nEnter number:");
scanf("%f",&n);
printf("\nPower or Square root?");
scanf("%s",&ans);

if(strncmp(ans,"Power",10)==0 || strncmp(ans,"power",10)==0){
    printf("\nPower by what?");
    scanf("%f",&pw);
    printf("\nAnswer: %.3f",pow(n,pw));

}
else {
    printf("\nAnswer: %f",sqrt(n));
}
}
