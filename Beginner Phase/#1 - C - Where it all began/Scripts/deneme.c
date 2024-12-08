#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#define esc 27

void main()
{
    printf("hey");
    printf("\nI seem to remember how this all works: %d %.1f %lf",5,3.2,5.8);
    printf("please enter a number: ");
    int e;
    scanf("%d",&e);
    printf("%d\n",e);


    unsigned char a,b,a_land_b,a_band_b,a_lor_b,a_bor_b,a_lneg_b,a_bcom_b;
    a = 0xF0;
    b = 0x0F;
    a_land_b = (a&&b);
    a_band_b = (a&b);
    a_lor_b = (a||b);
    a_bor_b = (a|b);
    a_lneg_b = (!b);
    a_bcom_b = (~b);
    printf("%u",a_land_b);
    printf("\n%u",a_band_b);
    printf("\n%u",a_lor_b);
    printf("\n%u",a_bor_b);
    printf("\n%u",a_lneg_b);
    printf("\n%u",a_bcom_b);

    int i=0,j=0,k = 0;
    bool state = true;
    char c;
    while(state){
        switch(e) {
        case 1: k++;
                break;
        case 2: j--;
                break;
        case 3: j=j+k;
                break;
        default: k-=j;
        }
        printf("\ni:%d,j:%d,k:%d",i,j,k);
        printf("\nPress esc to exit\nNew number: ");
        c = getch();
        if (c==27){state = false;}
        else {e = c-48; printf("%d",e);}
        }

    do{
        printf("\nEntering the do-while loop!");
    }while(state);

    for(i=0;i<k;i++)
    {
        j+=k;
        printf("\nj:%d",j);
    }
}
