#include <stdio.h>
#include <time.h>

typedef struct{
char name[20];
int age;
char birthday[32];
}person;


void birthday(person *p);

int main()
{
person p1;
printf("Enter your name: ");
scanf("%s",&p1.name);

printf("\nEnter your age: ");
scanf("%d",&p1.age);
printf("\nEnter your birthday (DD MM)\n");
getchar();
scanf("%[^\n]s",&p1.birthday);
birthday(&p1);

}

void birthday(person *p)
{
    char today[32];
    time_t rawtime = time(NULL);
    struct tm * timeinfo;
    timeinfo = localtime(&rawtime);
   strftime(today,35,"%d %B",timeinfo);

   if(strncmp(today,(*p).birthday,32)==0)
   {

    (*p).age ++;
    printf("\nCongratulations!, %s is now %d years old! Happy birthday!",(*p).name,(*p).age);
   }
   else
   {
       printf("%s is %d years old",(*p).name,(*p).age);
   }
}
