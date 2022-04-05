#include <stdio.h>

void swap(int *n1, int *n2) {
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main() {
    int a = 1, b = 2;
    printf("%d, %d\n", a, b);
    
    swap(&a, &b);
    
    printf("%d, %d\n", a, b);
    
    return 0;
}
