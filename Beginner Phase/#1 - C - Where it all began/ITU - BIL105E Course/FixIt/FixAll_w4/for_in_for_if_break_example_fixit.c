#include <stdio.h>
#include <stdlib.h>

int main()
{
//carpim tablosunun ic ice dongu ile yopilisi break hangi döngüden çýkardý bizi? hangisinden çýkaramadý sonuçlarý incele
//The break worked in which loop? Which loop break has no effect? Look results
int j;
    for (int i = 1; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
        printf( "%d x %d\n" , i, j, i*j);
            if (i>=3&&j<2){
            break;
			}

    	}
	}
system("PAUSE");	
    //getch();
    //getchar();
return 0;
}
