#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

double f(double x){
    return exp(x*cos(M_PI_4))*cos(x*sin(M_PI_4));
}

int main(int argc, char **argv) {
    double x;
    
    if(argc > 1) {
        for(int i=1; i < argc; i++) {
            x = atof(argv[i]);
            printf("%s  %f\n", argv[i], f(x));
        }
         
    } else {
        printf("Введите число: ");
        scanf("%lf", &x);
        printf("%f  %f\n", x, f(x));
    }
    
    return 0;
}
