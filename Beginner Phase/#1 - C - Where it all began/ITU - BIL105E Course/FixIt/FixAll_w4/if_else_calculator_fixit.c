#include<stdio.h>
int main()
{
float a,b,sonuc;
char islem;

   printf("MY CALCULATOR\n");
   printf("OPERATION FOR 2 NUMBERS \n CHOOSE + or - or * or /\n");
   printf("-------------------------\n");
   scanf("%c",&islem);
   printf("Chosen: %c\n\n",islem);
   printf("Enter 1st number\n");
   scanf("%f",&a);
   printf("Enter 2nd number\n");
   scanf("%f",&b);

   if (islem=='+'){
   sonuc=a+b ; printf("Result = %5.3f",sonuc);
   }
   else if (islem=='-'){
   sonuc=a-b ; printf("Result = %5.3f",sonuc);
    }
   else if (islem=='/'){
   sonuc=a/b ; printf("Result = %5.3f",sonuc);
    }
   else if (islem=='*'){
   sonuc=a*b ; printf("Result = %5.3f",sonuc);
    }
   getch();
   return 0;
}
