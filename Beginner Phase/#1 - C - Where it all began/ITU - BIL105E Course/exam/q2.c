#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "random_module.h"

void readInput(char* filename, int* Nu, int *Nn, double* a, double *b);

int main(int argc, char* argv[]){

    srand(time(0));
    int Nu, Nn;
    double a, b;

    if(argc == 2){  //given filename
        readInput(argv[1], &Nu, &Nn, &a, &b);
    }
    else if(argc == 5){
        Nu = atoi(argv[1]);
        a  = atof(argv[2]);
        b  = atof(argv[3]);
        Nn = atoi(argv[4]);
    }
    else {
        printf("Please provide a (correct) input.\n");
        exit(EXIT_FAILURE);
    }

    double *uniformArr = uniformArray(Nn,a,b);
    double *sNormalArr = stdNormalArray(Nn,Nu,a,b);

    printf("Sample average of %d elements ~ U(%.2lf,%2.lf) = %.4lf\n", Nn, a, b, sample_mean(uniformArr,Nn));
    printf("Sample variance of %d elements ~ U(%.2lf,%2.lf) = %.4lf\n\n", Nn, a, b, sample_var(uniformArr,Nn));

    printf("Sample average of %d elements ~ N(0,1) = %.4lf\n", Nn, sample_mean(sNormalArr,Nn));
    printf("Sample variance of %d elements ~ N(0,1) = %.4lf\n\n", Nn, sample_var(sNormalArr,Nn));

    out_data(uniformArr, "uniform", Nn);
    out_data(sNormalArr, "Normal", Nn);

    return 0;
}

void readInput(char* filename, int* Nu, int *Nn, double* a, double *b){
    FILE *f = fopen(filename, "r");
    if(!f){
        perror("Could not open file");
        exit(EXIT_FAILURE);
    }
    fscanf(f, "%d,%lf,%lf,%d", Nu, a, b, Nn);
    fclose(f);
}

