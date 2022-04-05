#include <stdio.h>
#include "my_lib.h"

#define N 3

int main() {
    
    int a[N];
    
    for(int i=0; i<N; i++) {
        printf("Введите %d-й эл-т: ", i+1);
        a[i] = read_int();
    }
    
    int max = a[0];
    
    for(int i=1; i<N; i++) {
        if(a[i] > max) {
            max = a[i];
        }
    }
    
    int sum = 0;
    
    for(int i=0; i<N; i++) {
        sum += a[i];
    }
    
    printf("Максимальное число из первых %ld-и веденных равен: %d\n", sizeof(a)/sizeof(int), max);
    printf("Сумма всех чисел равно: %d\n", sum);
    
    return 0;
}
