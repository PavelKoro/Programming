#include <stdio.h>

#define size 10

int factorial(int n) {
    if(n > 1){
        return n*factorial(n-1);
    } else {
        return 1;
    }
}

int main()
{
    int fact[size] = {0};
    
    for(int i=0; i<size; i++){
        fact[i] = factorial(i+1);
    }
    
    for(int i=0; i<size; i++){
        printf("%i-й факториал равен: %d\n", i+1, fact[i]);
    }
    return 0;
}
