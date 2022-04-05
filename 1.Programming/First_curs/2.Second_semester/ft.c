#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

double f(double x){
    return exp(x*cos(M_PI_4))*cos(x*sin(M_PI_4));
}

int main(int argc, char **argv) {
    double x = (1 - 0.1)/9;
    
    if(argc > 1) {
        FILE *result = fopen(argv[1], "w");

        for(double i=0.1; i <= 1;) {
            fprintf(result, "%f  %f\n", i, f(i));
            i += x;
        }

        fclose(result);
         
    } else {
        
        for(double i=0.1; i<=1;) {
            printf("%f  %f\n", i, f(i));
            i += x;
        }
    }
    
    return 0;
}
