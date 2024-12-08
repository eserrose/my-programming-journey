#include <stdio.h>

int main()

{
double q1,q2,h1,h2,m,f;
double note;

printf("Quizz 1:");
scanf("%lf",&q1);
printf("\nQuizz 2:");
scanf("%lf",&q2);
printf("\nHW 1:");
scanf("%lf",&h1);
printf("\nHW 2:");
scanf("%lf",&h2);
printf("\nMidterm:");
scanf("%lf",&m);
printf("\nFinal:");
scanf("%lf",&f);
note = ((q1/20) + (q2/20) + (h1/20) + (h2/20)+(m*3/10) + (f/2));
printf("\nNote: %.2lf\n", note);

getchar();
system("pause");
return 0;

}
