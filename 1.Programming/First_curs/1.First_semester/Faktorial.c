#include <stdio.h>

int main()
{
    int lenght = 0; // 13! упрется в int, так как дальше int выводит неверное значение факториала
    
    while (lenght < 21){
        int n = lenght, F = 1;
        long tmp = lenght, D = 1;

        if (n < 0){
            printf("Введите положительный факториал!\n");
        } else if (n == 0) {
            F = 1;
            D = 1;
            printf("Факториал(%d) равен (int): %d \n", lenght, F);
            printf("Факториал(%d) равен (long): %ld \n\n", lenght, D);

            lenght++;

        } else {
            while (n > 0) {
                F = F * n;
                n--;
            }
            printf("Факториал(%d) равен (int): %d \n", lenght, F);
            
            while (tmp > 0) {
                D = D * tmp;
                tmp--;
            }
            printf("Факториал(%d) равен (long): %ld \n\n", lenght, D);
            
            lenght++;
        }
    }
    return 0;
}
