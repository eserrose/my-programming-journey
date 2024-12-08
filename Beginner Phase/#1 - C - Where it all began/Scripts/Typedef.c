#include <stdio.h>


typedef struct
{
char name[30];
char species[30];
int age;

} animal;




int main()

{
    animal animals[5];
    int i;
    printf("Enter the info of your animal\n");
    for(i=0;i<5;i++)
    {

    printf("\nSpecies: ");
    scanf("%s",&animals[i].species);
    printf("\nName: ");
    scanf("%s",&animals[i].name);
    printf("\nAge: ");
    scanf("%d",&animals[i].age);
    printf("\n");
    }

    printf("The animals are: \n");

    for(i=0;i<5;i++)
    {

        printf("%s\n",animals[i].species);
    }


}
