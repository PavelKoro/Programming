#include <stdio.h>
#include "my_lib.h"

int ChekSide(int a1, int a2, int a3) {
    int result = 1;
    
    if(!(a1 + a2 > a3)) {
        printf("Сумма %d, %d должна быть больше %d!\n", a1, a2, a3);
        result = 0;
    }
    
    return result;
}

int main() {
    
    printf("Введите три стороны треугольника: ");
    
    int a, b, c;
    a = read_int();
    b = read_int();
    c = read_int();
    
    if(ChekSide(a, b, c) && ChekSide(a, c, b) && ChekSide(c, b, a)) {
        printf("Треугольник со сторонами %d, %d, %d существует!\n", a, b, c);
    }
    
    return 0;
}
