#include <stdio.h>
#include "my_lib.h"

int main() {
    while(1) {
        printf("Введите выражение в такой форме: число1 символ_оператора число2: ");
        float number_1 = read_int();
        char sign = space_nop();
        if(sign != '.' && (sign == '+' || sign == '-' || sign == '*' || sign == '/')) {
            float number_2 = read_int();
                if(sign == '+') {
                    printf("Result: %4f\n", number_1 + number_2);
                } else if(sign == '-') {
                    printf("Result: %4f\n", number_1 - number_2);
                } else if(sign == '*') {
                    printf("Result: %4f\n", number_1 * number_2);
                } else if(sign == '/') {
                    printf("Result: %4f\n", number_1 / number_2);
                }
        } else {
            printf("Бед инпут\n");
            return 0; 
        }
    }
  
    return 0; 
}

