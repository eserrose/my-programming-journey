#include <stdio.h>


int main()

{
int i,j;
float matrix[3][3];
float m2[3][3];

printf("A= \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
    matrix[0][j] = 1.0;
    m2[0][j] =j+1;
    m2[1][j] =j+4;
    m2[2][j] =j+7;
    matrix[1][j] = 2.0;
    matrix[2][j] = 3.0;

   printf("%.1f ",matrix[i][j]);
}
printf("\n");
}

printf("\nB= \n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
    printf("%.1f ",m2[i][j]);
}
printf("\n");
}

float sum[3][3];
float mult[3][3];
float mult2[3][3];
float mult3[3][3];

for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
    sum[i][j] = matrix[i][j] + m2[i][j];
}
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
    mult[i][j] = matrix[0][j]* m2[j][i];
    mult2[i][j] = matrix[1][j]* m2[j][i];
    mult3[i][j] = matrix[2][j]* m2[j][i];

}

}


float mfinal[3][3];
int v,y;
mfinal[3][3] = 0;
for(i=0;i<1;i++){
    for(v=0;v<3;v++){
    for(y=0;y<3;y++)
{
    mfinal[0][v] += mult[v][y];
    mfinal[1][v] += mult2[v][y];
    mfinal[2][v] += mult3[v][y];
}

}
}


printf("\nA+B=\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
    printf("%4.1f ",sum[i][j]);
}
printf("\n");
}

printf("\nA*B=\n");
for(i=0;i<3;i++){
    for(j=0;j<3;j++)
{
printf("%4.1f ",mfinal[i][j]);
}
printf("\n");
}
}
