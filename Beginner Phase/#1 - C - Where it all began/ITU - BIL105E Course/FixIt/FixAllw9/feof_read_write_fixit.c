#include <stdio.h>
void main()
{

float x[20],t,s;
int k,j,i;

//Entering the values and writing to file
mat=fopen("a.txt","w") ;
for (i=1;i<=5 ;i++){ 
printf( "\n bir sayi giriniz");
scanf("%f",s);
fprintf(mat,"\n %f",s);
}
fclose(mat);

//reading from the file
mat=fopen("a.txt","r");
while (!feof(mat))
{fscanf (mat,"\n %f",s);
printf("\n dosyadakiler: %f",s);
}
fclose(mat);
}

