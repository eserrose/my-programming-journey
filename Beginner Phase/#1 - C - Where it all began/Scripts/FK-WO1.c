#include <stdio.h>
#include <time.h>
#include <windows.h>

float addtoprogress(float,float,char*);
char* showtime();
char* warmupgenerator();
float progress_2(int Sq,int pu, int lu,int pl,int jj,int ht,int ipu,int c,int bd);
int main()
{

printf("Welcome to the Firat Kervan Workout Program v1.0\n");
printf("To start, please enter your current weight and height\n");
float weight,height;
printf("Weight (kg): "); scanf("%f",&weight);
puts("");
printf("Height (cm): "); scanf("%f",&height);
puts("");
addtoprogress(weight,height,showtime());
printf("Progress saved. Thanks\n");

int Sq,pu,lu,pl,jj,ht,ipu,c,bd; int r=0;
printf("First thing's first. WARM UP. Get your body warm and pumped up.\n");
printf("Warm-up of today is: %s\n",warmupgenerator());
printf("Do it for a few minutes, then press enter");
getch();
printf("\n If you're unable to reach the prescribed number of reps in a given set, rest-pause until you reach the rep count.\n (Rest-pause is where, when reaching failure during a given set, you rest anywhere from 10-30 seconds and continue repping out.)");
while (r<3){
printf("\nType in how many of the reps could you do after the exercise is shown\n");
printf("20xSquats (Bw)\n");
printf("How many did you do?: "); scanf("%d",&Sq);
puts("");
printf("15xPush-Ups\n");
printf("How many did you do?: "); scanf("%d",&pu);
puts("");
printf("10xLunge (Each Leg)\n");
printf("How many did you do?: "); scanf("%d",&lu);
puts("");
printf("30 Sec Plank\n");
printf("How many seconds did you do?: "); scanf("%d",&pl);
puts("");
printf("20xJumping Jacks\n");
printf("How many did you do?: "); scanf("%d",&jj);
puts("");
printf("15xHip Thrusts\n");
printf("How many did you do?: "); scanf("%d",&ht);
puts("");
printf("15xInclined Push-Ups\n");
printf("How many did you do?: "); scanf("%d",&ipu);
puts("");
printf("25xCrunches\n");
printf("How many did you do?: "); scanf("%d",&c);
puts("");
printf("10xBench Dips\n");
printf("How many did you do?: "); scanf("%d",&bd);
r++;
if(r<3){
printf("\nAwesome. Take a break until I say you can begin the next set");
Sleep(15000);
printf("\nRemember to drink water!");
Sleep(15000);
printf("\nWater is essential for your body y'know");
Sleep(15000);
printf("\nGet ready");
Sleep(15000);
printf("\nGo!");
Sleep(2000);
}
}

printf("\nYoku dekimashita, Furatto-chan. Now we can proceed to the final step. Press enter\n");
getch();
printf("\nStart stretching. It is important, so you don't have pain all over your body tomorrow.");
printf("\nNow go eat some protein (yogurt, protein bar, milk, nuts, meat, chicken, fish, etc.) and some carbs");
getch();
printf("\nYour log is saving, please wait");
progress_2(Sq,pu,lu,pl,jj,ht,ipu,c,bd);
Sleep(1000);
printf("\n...");
Sleep(2000);
printf("\nProgress saved. You can check the file Progress.txt to keep a track of your progress. Have a nice day!");


}

float addtoprogress(float w,float h,char* date)
{

FILE *progress;
progress = fopen("Progress.txt","a");
fprintf(progress,"%s Weight: %.2f Height: %.2f\n",date,w,h);
fclose(progress);
}


char* showtime()
{
char *buffer = (char *) malloc(sizeof(char) * 32);
    time_t rawtime = time(NULL);
    struct tm * timeinfo;
    timeinfo = localtime(&rawtime);
    strftime(buffer,32,"%d %B %Y",timeinfo);
    return buffer;
}

char* warmupgenerator()
{
char *wu = (char *) malloc(sizeof(char) * 100);
int N=0,i;
srand(time(NULL));
N = rand()%7 +1;


switch(N){
case 1: wu = "Run in place"; break;
case 2: wu = "Jump rope"; break;
case 3: wu = "Push-ups"; break;
case 4: wu = "Pedal on bike"; break;
case 5: wu = "Punch and Kick"; break;
case 6: wu = "Jog up and down your stairs"; break;
case 7: wu = "Swing your arms"; break;
}
return wu;
}

float progress_2(int Sq,int pu, int lu,int pl,int jj,int ht,int ipu,int c,int bd)
{
FILE *progress;
progress = fopen("Progress.txt","a");
fprintf(progress,"Squats: %d, Pull-ups: %d, Lunges: %d, Plank: %d, JJ: %d, HT: %d, I.Push-Ups: %d, Crunches: %d, Dips: %d\n",Sq,pu,lu,pl,jj,ht,ipu,c,bd);
fclose(progress);
}

//Issues to fix: It only saves the last set. Make it a dynamic array so it takes the new values every time.
//Issue 2: Put the while loop that has the exercises into another function
//Updates: Change the rep number after a certain number is achieved
//Update 2: Change some of the moves after a certain number is achieved. Add a count to the beginning of the code.
