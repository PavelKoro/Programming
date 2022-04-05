#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
int main() {
    int k;  // объявляем целую переменную key
    int sum = 0; // начальное значение суммы равно 0
    printf("k = ");
    scanf("%d", &k);   // вводим значение переменной k
    for(int i=1; i<=k; i++) // цикл для переменной i от 1 до k с шагом 1
    {
        sum = sum + i; // добавляем значение i к сумме
    }
    printf("sum = %d\n", sum); // вывод значения суммы
    return 0;
}
