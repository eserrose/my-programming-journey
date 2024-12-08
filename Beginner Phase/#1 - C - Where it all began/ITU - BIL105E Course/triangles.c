#include <stdio.h>
#include <math.h>

int main()

{
int sides[3];
int i;

x:for(i=0;i<3;i++)
{
printf("Enter side %d: ",i+1);
scanf("%d",&sides[i]);
}


while(sides[0]>0 && sides[1]>0 && sides[2]>0)
{

   if(sides[0]+sides[1]>sides[2] && sides[0] + sides[2] > sides[1] && sides[1]+sides[2] > sides[0])
   {

    if(sides[0]==sides[1] && sides[0]==sides[2])
    {
        printf("\nThis is an equilateral triangle\n\n");
        goto x;
    }

    else if(sides[0]==sides[1] || sides[1]==sides[2] || sides[0]==sides[2] )
    {
        printf("\nThis one is an Isosceles Triangle\n\n");
        goto x;
    }

    else {printf("\nThis is a Scalene Triangle\n\n"); goto x;}
}

    else { printf("\n\aSorry but this triangle formation is NOT POSSIBLE\n\n"); goto x;  }
}

}
