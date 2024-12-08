#include <stdio.h>


int main()

{
char name[100];
printf("Enter a name (Don't use Turkish characters please): ");
ax:scanf("%s",&name);

if(strncmp(name,"Firat",100)==0 || strncmp(name,"firat",100)==0)
{
    printf("\nChess\n");
    printf("\nName:");
goto ax;
}

else if(strncmp(name,"Alperen",100)==0 || strncmp(name,"alperen",100)==0)
{
    printf("\nFOOD\n");
    printf("\nName:");
goto ax;
}


else if(strncmp(name,"Eser",100)==0 || strncmp(name,"eser",100)==0)
{
    printf("\nGreat guy\n");
    printf("\nName:");
goto ax;
}
else if(strncmp(name,"Ecem",100)==0 || strncmp(name,"ecem",100)==0)
{
    printf("\nLove of my life\n");
    printf("\nName:");
goto ax;
}

else if(strncmp(name,"Poe",100)==0 || strncmp(name,"Edgar Allen Poe",100)==0)
{
    printf("\nQuoth the Raven, Nevermore\n");
    exit(0);
}
else if(strncmp(name,"Efe",100)==0 || strncmp(name,"efe",100)==0)
{
    printf("\nGIVE HIM TOBACCO. GIVE HIM NOW\n");
    printf("\nName:");
goto ax;
}
else if(strncmp(name,"Berk",100)==0 || strncmp(name,"AliBerk",100)==0 || strncmp(name,"berk",100)==0)
{
    printf("\nSou desu\n");
    printf("\nName:");
goto ax;
}
else if(strncmp(name,"Atil",100)==0 || strncmp(name,"atil",100)==0)
{
    printf("\nTalihsiz seruvenler dizisi\n");
    printf("\nName:");
goto ax;
}
else if(strncmp(name,"42",100)==0)
{
    printf("\nThe answer to life,universe and everything\n");
    printf("\nName:");
goto ax;
}

else{printf("\n%s is not in database, sorry\n",name);
 printf("\nName:");
goto ax;}

system("pause");
}
