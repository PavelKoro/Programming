#include <stdio.h>
#include "my_lib.h"

void print_int(int n) {
    int count = 1;

    if(n == 0) {
        putchar('0');
        return;

    } else if(n < 0) {
        n *= -1;
        putchar('-');
    }
    
    while(1) {
        int tmp = n / count;
        if(tmp >= 1 && tmp <= 9) {
            break;
        } else {
            count *= 10;
        }
    }
    
    
    
    int digit;

    while(count != 0) {        
        digit = n / count;
        putchar(digit + '0');
        n = n % count;        
        count /= 10;
    }
}


int main() {

    print_int(read_int());
    return 0;
}
