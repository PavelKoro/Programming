#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *n1, int *n2) {
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main() {
    srand(time(NULL));
    
    printf("Дорогой пользователь, если ты читаешь, значит ты уже согласен поиграть в игру 'Угадай число!'\n");
    printf("Для простоты задай мне диапозон, чтобы я загадал число в этом диапозоне!\n\n");

    int a, b, c;
    printf("От: ");
    scanf("%d", &a);
    
    printf("До: ");
    scanf("%d", &b);
    
    c = rand()%(b-a+1)+a;
    
    if(a > b) {
        swap(&a, &b);
        printf("Вы имели ввиду такой диапозон? [%d, %d]\n", a, b);
    } 

    int step = 1, the_end = 0;

    while(the_end != 1) {
        int tmp;
        printf("Введите число в заданном диапозоне: ");
        scanf("%d", &tmp);

        if(tmp >= a && tmp <= b) {
            if(tmp > c) {
                printf("Вы ввели число больше задуманного!\n\n");
                step++;
                
            } else if(tmp < c) {
                printf("Вы ввели число меньше задуманного!\n\n");
                step++;
                
            } else {
                printf("Вы отгадали число с %d-ой попытки!\n\n", step);
                the_end++;
            }
        } else {
            printf("Мимо! Попробуйте еще раз! Только теперь введите число в диапозоне!\n");
        }

    }
    return 0;
}
