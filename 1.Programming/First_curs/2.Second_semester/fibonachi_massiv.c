#include <stdio.h>

#define size 10

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

int main()
{
    int fib[size] = {0};
    
    for(int i=0; i<size; i++){
        fib[i] = fib_cycle(i+1);
    }
    
    for(int i=0; i<size; i++){
        printf("%d ", fib[i]);
    }
    return 0;
}
