#include <stdio.h>
#include <math.h> 
/*Чтобы запустить эту библиотеку нкжно ввести такую каманду: gcc diskriminant.c -lm  && ./a.out
*/
int main()
{

    // Ищит чему равен дискриминант
    double discriminant(double a, double b, double c) {
        double result = b*b - 4*a*c;
        return result;
    }
    //////////////////

    // Проверяет дискриминант: положительный ли дискриминант?    
    int Examination_discriminant(double a) {
        int result = 0;
        
        if(a > 0) {
            result = 2;
        } else if(a == 0) {
            result = 1;
        } else {
            result = 0;        
        }

        return result;
    }
    //////////////////

    // Ищит неполный корень
    double Root(double a) {
        double x = 1/(2*a);
        return x;
    }
    //////////////////
    
    double a = 1, b = 1, c = -2; // При таких значениях корни квадр. урав.: x1 = 1; x2 = -2
    double d = discriminant(a, b, c), r = Examination_discriminant(d);

    if(r == 2) {
        printf("x1 = %f\n", Root(a)*(-b+sqrt(d)));
        printf("x2 = %f\n", Root(a)*(-b-sqrt(d)));

    } else if(r == 1) {
        printf("x = %f\n", Root(a)*(-b+sqrt(d)));
    } else {
        printf("Корней нет!");
    }
    
    return 0;
}
