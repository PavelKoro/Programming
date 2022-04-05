#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void f(double x, double y){
    if( ((x*x + y*y) <= 1) && ((x - 1) <= y) && ((-x+1) >= y) ) {
        printf("Точка (%f; %f) принадлежит вашей функции!\n", x, y);
    } else {
        printf("Точка (%f; %f) не принадлежит вашей функции!\n", x, y);
    }
}

int main(int argc, char **argv) {
    double x, y;
    
    if(argc > 1) {
        x = atof(argv[1]);
        y = atof(argv[2]);
        
        printf("%f %f\n", x, y);
        
        f(x, y);
    } else {
        printf("Введите координаты точки (x, y): ");
        scanf("%lf", &x);
        scanf("%lf", &y);
        f(x, y);
    }
    return 0;
}
