#include <stdio.h>
#include <stdarg.h>

void PrintArguments ( const char * format, ... )
{
  char buffer[256];
  va_list args;
  va_start (args, format);
  vsnprintf (buffer,256,format, args);
  perror (buffer);
  va_end (args);
}

double sumNums(int a, ...){
    va_list args;
    double sum = 0;
    va_start(args,a);
    for(int x = 0;x<a;x++){
        sum+=va_arg(args,double);
    }
    va_end(args);
    return sum;
}

int main(){
    printf("\033[31m%lf\n",sumNums(4,9.0,8.0,1.1,2.1));
    PrintArguments("%d %d %d",1,2,3);
    getchar();
}