#include <stdio.h>
#include <math.h>

double areaTriangle90(double katet1, double katet2) {
         return 0.5*katet1*katet2;
    }

int main()
{
    double a = 2, h = 6, result = (2 * areaTriangle90(a/2, h));

    if(result > 0) {
        printf("Площади равнобедренного треугольника равен: %12.12f \n", result);
    } else {
        printf("Не существует такой площади равнобедренного треугольника!\n");
    }

    return 0;
}
