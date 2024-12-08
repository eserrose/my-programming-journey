#include <stdio.h>

int main()

{
    float q1,q2,h1,h2,m,f;
float note;
int r1,r2,r3,r4;
printf("Weight of quizz (%%):");
scanf("%d",&r1);
printf("\nQuizz 1:");
scanf("%f",&q1);
printf("\nQuizz 2:");
scanf("%f",&q2);
printf("\nWeight of homework (%%):");
scanf("%d",&r2);
printf("\nHW 1:");
scanf("%f",&h1);
printf("\nHW 2:");
scanf("%f",&h2);
printf("\nWeight of midterm (%%):");
scanf("%d",&r3);
printf("\nMidterm:");
scanf("%f",&m);
printf("\nWeight of final (%%):");
scanf("%d",&r4);
printf("\nFinal:");
scanf("%f",&f);
note = q1*r1/200 + q2*r1/200 + h1*r2/200 + h2*r2/200 +m*r3/100 + f*r4/100;
//printf("%.2f\n",note);


    if(note<30)
    {
    printf("Grade: FF\n");
    }

   else if(note<40)
   {
       printf("Grade: DD\n");
    }

else if(note<50)
{
    printf("Grade: DC\n");
}

else if(note<60)
{
    printf("Grade: CC\n");
}

else if(note<70)
{
    printf("Grade: CB\n");
}

else if(note<80)
{
    printf("Grade: BB\n");
}

else if(note<90)
{
    printf("Grade: BA\n");
}
else{
    printf("Grade: AA\n");
}

system("pause");
return 0;

}
