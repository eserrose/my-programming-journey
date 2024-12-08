%hd = short int
%u = unsigned
%ld = long int


operation between int and float:

int total=100, number=50;
float percentage=0.0;

percentage=(number/total)*100;
printf("%.2f",percentage);

if you do that, it divides 50 with 100, which evaluates to 0.5 and since it's int/int, it brings us the integer "0"

    correction:
double percentage;
percentage = 100.0*number/total;
// percentage = (double)number/total * 100;

or

// ...
percentage = (float)number/total * 100;
// percentage = 100.0f*number/total;
