#include <stdio.h>
#include "my_lib.h"

struct roots {
    double root;
    int root_count;
};

struct roots SolveLinearEq(double b, double k) {
    struct roots result = {0, 0};
    
    if(k != 0) {
        result.root_count = 1;
        result.root = -b/k;

    } else if(b == 0) {
        result.root_count = -1;
    }
    
    return result;
}

int main() {
    double Distance, V, Traveled;
    printf("Введите длину пути в м и скорость Винни-Пуха и Пяточка в м/c, а также сколько уже прошли пути: ");
    Distance = read_int();
    V = read_int();
    Traveled = read_int();
    
    struct roots sol;
    sol = SolveLinearEq(Distance-Traveled, V);
    
    if(sol.root_count == 0) {
        printf("У Винни-Пуха и Пяточка привал!\n");
    } else if(sol.root_count == 1) {
        if(sol.root >= 0) {
            printf("t = %f\n", -sol.root);
        } else {
            printf("t = %f\n", -sol.root);
            printf("Винни-Пух и Пяточок пошли не туда!\n");
        }
    } else if(sol.root_count == -1) {
        printf("Винни-Пух и Пяточок уже пришли!\n");
    }
    
    
    
    return 0;
}
