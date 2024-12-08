#include <stdio.h>
#include <string.h>

int main ()
{
  char s1[20],s2[20];
  char s3[]="@itu.edu.tr",s4[40]="";
  printf("Enter your name and surname:");
  scanf("%s%s",&s1,&s2);
  strncat(s4,s1,1);
  strcat(s4,s2);
  strcat(s4,s3);
  printf("Your email is:%s",s4);
  getchar();
  return 0;
}
