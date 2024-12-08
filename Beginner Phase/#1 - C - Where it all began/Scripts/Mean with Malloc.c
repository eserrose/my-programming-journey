#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float *x,mean,sum;

        printf("Number of elements in the array: ");
        scanf("%d",&n);

            if(n<=0)
            {
                exit(0);
            }

                        x = (float*) malloc(sizeof(float)*n);

            if(x==NULL)
            {
                printf("\nInsufficient space");
                exit(1);
            }

        for(sum=0.0,i=0;i<n;i++)
            {
            printf("\n%dth number: ",i+1);
            scanf("%f",&x[i]);
            sum += x[i];
            }

            mean = sum/n;
            printf("\nMean is %f\n\n",mean);
            free(x);

            return 0;}
