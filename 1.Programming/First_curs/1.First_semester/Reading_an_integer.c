#include <stdio.h>

int main() {
    int ch = getchar(), result = 0, negative = 0;

    while(ch == ' ' || ch == '\n' || ch == '\t') {
        ch = getchar();
    }
    

    if (ch != '+' && ch != '-' && !(ch >= '0' && ch <= '9')) {
        printf("Bad input\n");
        return 1;
    }

    if(ch == '+' || ch == '-'){
        char sign = ch;
        ch = getchar();

        if(ch >= '0' && ch <= '9'){
            if(sign == '-'){
                negative = 1;
            }        
        } else {
            printf("Bad input\n");
            return 1;        
        }   
    }

    while(ch >= '0' && ch <= '9') {
        result *= 10;
        result += (ch - '0');
        ch = getchar();
    }

    if(negative) {
        result = -result;
    }
    
    printf("result = %d \n", result);

    return 0;
}
