#include <stdio.h>
#include "my_lib.h"

int fib_cycle(int number) {
    long sum = 1, copy = 1;
    int i = 3;

    if(number <= 0) {
        return -1;
    }
    
    while(number >= i) {
            sum += copy;
            copy = sum - copy;
            i++;
        }
    return sum;
}

/*int fib_rec(int number) {
    long sum = 1, copy = 1;
    int i = 3;

    if(number <= 0) {
        return -1;

    } else if(number >= i) {
        printf("%ld\n", sum);
        sum += copy;
        copy = sum - copy;
    }

    return (sum+copy)*fib_rec(number-1);
}*/

int main() {
    printf("Введите число: ");
    int number = read_int();
    int result_cycle = fib_cycle(number);

    if(fib_cycle(number) != -1) {
        printf("№%d: %d - через функцию\n", number, result_cycle);
        /*printf("№%d: %d - через рекурсию\n", number, result_rec);*/
    } else {
        printf("Nop!\n");
    }

    return 0;
}
