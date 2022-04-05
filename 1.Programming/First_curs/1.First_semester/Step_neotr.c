#include <stdio.h>
#include "my_lib.h"

    int int_stepen(int base, int stepen) {
        int result = 1;

        if(base == 0) {
            return 0;
        } else if(base == 1) {
            return 1;
        } else if(stepen > 0) {
            result =  base*int_stepen(base, stepen-1); 
        }
        return result;
    }

int main() {
    printf("Введите основание: ");
    int base = read_int(); 
    printf("Введите степень: ");
    int stepen = read_int();
    printf("%d\n", int_stepen(base, stepen));
    return 0; 
}
