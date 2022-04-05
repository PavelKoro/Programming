#include <stdio.h>

void repeat_char_1(int count, char ch) {
    for(int i=1; i <= count; i++) {
        printf("%d: %c\n", i, ch);
    }
}

void repeat_char_2(int count, char ch) {
    if(count > 0) {   
        printf("%c\n", ch);
        repeat_char_2(count-1, ch);
    }
}

int main() {
    repeat_char_1(3, 'a');
    repeat_char_2(3, 'a');
    return 0;
}
