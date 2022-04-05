#include <stdio.h>

int main()
{
    double lenght = 0, end = 2;
    
    while (lenght <= end) {
        double a = 10, copy = a, n = lenght;
        
        if (n < 0) {
            printf("Введите положительную степень!\n");
        } else if (n == 0) {
            printf("Число %d^%d равен: %d \n", copy, lenght, 1);
            lenght++;
        } else {
            while (n > 1){
                a = a * copy;
                n -= 0.5;
            }
            printf("Число %d^%d равен: %d \n", copy, lenght, a);
            lenght++;
        }
    }

    return 0;
}
