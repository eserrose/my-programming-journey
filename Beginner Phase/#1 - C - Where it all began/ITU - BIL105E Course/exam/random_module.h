#ifndef __RANDOM_MODULE_H
#define __RANDOMN_MODULE_H

#define MEAN_STD_NORMAL         0
#define VAR_STD_NORMAL          1

double uniformRV(double a, double b);
double* uniformArray(int n, double a, double b);
double stdNormalRV(int nu, double a, double b);
double* stdNormalArray(int n, int nu, double a, double b);

double sample_mean(double* arr, int n);
double sample_var(double* arr, int n);

void out_data(double* data, char* filename, int n);

#endif
