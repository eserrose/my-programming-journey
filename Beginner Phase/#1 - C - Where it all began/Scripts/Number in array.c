# include <stdio.h>
# include <stdlib.h>
int main()
{
    int i;
    int N;
    int y;
    float x;
printf("Number of elements in array:");
scanf("%d",&N);
    float array[N];

    for(i=0;i<N;i++)
    {
        printf("%dth number of the array: ",i+1);
        scanf("%f",&array[i]);
    }

    system("CLS");
    printf("Mirror mirror,tell me which number in the array without error?: ");
    scanf("%f",&x);
    for(i=0;i<N;i++)
    {
        if (array[i]==x){
        y=5;
        break;}
    }

    if(y==5){
    printf("\n%f is the %dth number of the array ",array[i],i+1);}

    else {printf("\nThe number %f is not in the array",x);}

}
