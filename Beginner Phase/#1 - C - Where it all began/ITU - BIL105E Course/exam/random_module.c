#include "random_module.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

static inline double meanUniform(double a, double b){
    return (a+b)/2;
}

static inline double varUniform(double a, double b){
    return (b-a)*(b-a)/12;
}

double uniformRV(double a, double b){  
    return ((double)rand()/RAND_MAX*(b-a)+a);
}

double* uniformArray(int n, double a, double b){  
    double *arr = (double*) malloc(n*sizeof(double));
    
    for(int i = 0; i < n; i++)
        arr[i] = uniformRV(a, b);

    return arr;
}

double stdNormalRV(int nu, double a, double b){
    double *x = uniformArray(nu, a, b);
    double z = 0;

    for(int i = 0; i < nu; i++)
        z += x[i];

    return (z - nu*meanUniform(a,b))/sqrt(nu*varUniform(a,b));
}

double* stdNormalArray(int n, int nu, double a, double b){  
    double *arr = (double*) malloc(n*sizeof(double));
    
    for(int i = 0; i < n; i++)
        arr[i] = stdNormalRV(nu, a, b);

    return arr;
}

double sample_mean(double* arr, int n){
    double m = 0;
    for(int i = 0; i < n; i++)
        m += arr[i];
    return m/n;
}

double sample_var(double* arr, int n){
    double m = sample_mean(arr, n);
    double s = 0;
    for(int i = 0; i < n; i++)
        s += pow((arr[i] - m),2);
    return s/(n-1);
}

void out_data(double* data, char* filename, int n){
    char fn[255];

    sprintf(fn,"%s_%d",filename,n);

    FILE *f = fopen(fn, "w");

    if(!f){
        perror("Could not create file");
        exit(EXIT_FAILURE);
    }

    for(int i = 0; i < n; i++)
        fprintf(f ,"%0.3lf\n", data[i]);

}