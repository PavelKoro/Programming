#include <stdio.h>
#include <math.h>
#include "my_lib.h"

struct ThreeD_vector {
    double x;
    double y;
    double z;
};

double lenght(struct ThreeD_vector coord) {
    double result;
    result = sqrt(coord.x*coord.x + coord.y*coord.y + coord.z*coord.z);
    return result;
}

double sum(struct ThreeD_vector coord_1, struct ThreeD_vector coord_2) {
    double sum;
    
}

int main() {
    struct ThreeD_vector coord_1;
    struct ThreeD_vector coord_2;
    printf("Введите координаты первого трехмерного вектора: ");
    
    coord_1.x = read_int();
    coord_1.y = read_int();
    coord_1.z = read_int();

    printf("Введите координаты второго трехмерного вектора: ");
    
    coord_1.x = read_int();
    coord_2.y = read_int();
    coord_3.z = read_int();
    
    printf("Длина первого вектора: %f\n", lenght(coord_1));
    printf("Длина второго вектора: %f\n", lenght(coord_1));
    return 0;
}
