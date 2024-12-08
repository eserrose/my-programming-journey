#include <stdio.h>
#include <time.h>

typedef struct{
char *name;
int age;

}person;


void birthday(person *p);

int main()
{
person Eser;
Eser.name = "Eser";
Eser.age = 18;

printf("%s is %d years old",Eser.name,Eser.age);
birthday(&Eser);

}

void birthday(person *p)
{
    char today[32];
    time_t rawtime = time(NULL);
    struct tm * timeinfo;
    timeinfo = localtime(&rawtime);
   strftime(today,32,"%d %B",timeinfo);
   if(strncmp(today,"21 February",32)==0)
   {

    (*p).age ++;
    printf("\nCongratulations!, %s is now %d years old! Happy birthday!",(*p).name,(*p).age);
   }
}
