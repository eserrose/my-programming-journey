/********************************************************************************
Student Name and Surname: Sercan Þahan
Student Number: 150140005
Lecture Name: BIL105E - Introduction to Scientific and Engineering Computing (C)
Homework 2
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct person
{     
	int personId;
	double height;
	double weight;
	double BMI; 
}person[1730];

int main(int argc, char *argv[])
{
	int N = atoi(argv[1]), M = atoi(argv[2]);
	double threshold = atof(argv[3]); //assigning arguments to values
	double *differences; //initializing an array for differences between BMI values and threshold
	int tempPersonId; //temporary variable for sorting algorithm
	double tempHeight, tempWeight, tempBMI, tempDifferences;// temporary variables for sorting algorithm
	int i = 1, j = 1;
	char *useless = malloc(50 * sizeof(char));
	FILE *fileInput;
	FILE *fileOutput;

	fileInput = fopen("height_weight.txt", "r");//opening input file for reading
	fileOutput = fopen("output.txt", "w");//opening output file for reading
	fscanf(fileInput, "%[^\n]s", useless);//reading first character line of height_weight.txt to move pointer
	differences = malloc((N + 1)*sizeof(double));
	
	while(i <= N)
	{
		fscanf(fileInput, "%d%lf%lf", &person[i].personId, &person[i].height, &person[i].weight);
		person[i].BMI = person[i].weight/((person[i].height/100.00)*(person[i].height/100.00));
		i++;
	}//asigning values from height_weight.txt file to arrays
	fclose(fileInput);//closing height_weight.txt file
	free(useless);//freeing allocated memory for first character line of height_weight.txt

	for(i = 1; i <= N; i++)
	{
		differences[i] = fabs(threshold - person[i].BMI);
	}//calculating absolute value of differences bettween BMI values and threshold
	
	for(j = 1; j <= N; j++)
	{
		for(i = 1; i <= N; i++)
		{
			if(differences[i] < differences[i + 1])
			{
				tempPersonId = person[i].personId;
				person[i].personId = person[i + 1].personId;
				person[i + 1].personId = tempPersonId;
				
				tempHeight = person[i].height;
				person[i].height = person[i + 1].height;
				person[i + 1].height = tempHeight;
				
				tempWeight = person[i].weight;
				person[i].weight = person[i + 1].weight;
				person[i + 1].weight = tempWeight;
				
				tempBMI = person[i].BMI;
				person[i].BMI = person[i + 1].BMI;
				person[i + 1].BMI = tempBMI;
				
				tempDifferences = differences[i];
				differences[i] = differences[i + 1];
				differences[i + 1] = tempDifferences;
			}
		}
	} //sorting algorithm according to differences
	fprintf(fileOutput,"%10s%12s%12s%10s%20s", "Person_id","Height(cm)", "Weight(kg)", "BMI", "|BMI - threshold|\n");
	i = 1;
	while(i <= M)//Printing values to output.txt file
	{
		fprintf(fileOutput, "%10d%12.0lf%12.0lf%10.2lf%19.2lf\n", person[i].personId, person[i].height, person[i].weight, person[i].BMI, differences[i]);
		i++;
	}
	free(differences);
	fclose(fileOutput);
	return 0;
}
