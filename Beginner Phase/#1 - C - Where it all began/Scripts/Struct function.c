#include <stdio.h>
#include <string.h>

struct info
{
char name[50];
int owe;
};

struct info get_info (void);
void show_info(struct info);

int main(void)

{
struct info x;
x = get_info();
show_info(x);
return 0;
}


struct info get_info()
{
struct info person;
printf("Name: ");
scanf("%s",&person.name);
printf("\nOwe: ");
scanf("%d",&person.owe);
return person;
}

void show_info(struct info person)
{
printf("Name: %s",person.name);
printf("\nOwe: %d",person.owe);


}
