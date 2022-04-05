#include <stdio.h>
#include <math.h>
#include "my_lib.h"

struct roots {
    double root_1;
    double root_2;
    int root_count;
    
};

struct roots solve_eqz(double a, double b, double c) {
    double D = b*b - 4*a*c;
    struct roots result = {0, 0, 0};
    
    if(D > 0) {
        result.root_count = 2;
        result.root_1 = (-b + sqrt(D))/(2*a);
        result.root_2 = (-b - sqrt(D))/(2*a);
        return result;
    } else if(D == 0) {
        result.root_count = 1;
        result.root_1 = (-b + sqrt(D))/(2*a);
        return result;
        
    } else {
        result.root_count = 0;
        return result;
    }

}

int main() {
    int a, b, c;
    printf("Введиет a, b, c: ");
    a = read_int();
    b = read_int();
    c = read_int();    
    
    struct roots sol;
    sol = solve_eqz(a, b, c);
    
    if(sol.root_count == 0) {
        printf("Корней нет!\n");
    } else if(sol.root_count == 1) {
        printf("x = %f\n", sol.root_1);
    } else if(sol.root_count == 2) {
        printf("x1 = %f\n", sol.root_1);
        printf("x2 = %f\n", sol.root_2);
    }
    return 0;
}
