#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define _USE_MATH_DEFINES

double f(double x) {
    double result = 0;
    double s_cur = 1;
    double s2_cur = 1;
    
    for(int n=0; n<20; n++) {
        result += s_cur;
        s2_cur = s2_cur * x/(n+1);
        s_cur = cos((n+1)*M_PI_4) * s2_cur;
    }
    
    result += s_cur;
    
    return result;
}

int main(int argc, char **argv) {
    double x;
    
    if(argc > 1) {
        for(int i=1; i<argc; i++) {
            x = atof(argv[i]);
            printf("%f  %f\n", x, f(x));
        }
    } else {
        printf("Введите число: ");
        scanf("%lf", &x);
        printf("%f  %f\n", x, f(x));
    }
}
