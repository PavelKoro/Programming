#include <stdio.h>
#include <math.h>

double f(double x){
    return sin(x)-exp(x);
}

void swap(float *n1, float *n2){
    float tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main(){
    float a, b;
    float eps;
    
    printf("Определити границы функции (лучшее всего берите отрезок, где начало отрицательное)!\n");
    printf("    от: ");
    scanf("%f", &a);
    printf("    до: ");
    scanf("%f", &b);
    
    if(a > b){
        swap(&a, &b);
        printf("Возможно вы имелли ввиду это [%f,%f]?\n\n", a, b);
    }
    
    printf("С какой точностью выхотите увидеть ответ?\n");
    scanf("%f", &eps);
    
    if(eps < 0){
        printf("Не бывает такой точности!\n");
        return 1;
        
    } else if(eps == 0){
        printf("Вы ввели точность неправильно!\n");
        return 1;
    }
    
    float c;
    
    if(f(a)*f(b)<0){
        while(fabs(b-a) >= eps){
            c = (a+b)/2;
            
            if(f(a)*f(c) < 0){
                b = c;
            } else {
                a = c;
            }
        }
        
        printf("Ответ: %f\n", (a+b)/2);
    
    } else {
        printf("Попробуйте другой длины отрезок взять, ибо на вашем отрезке нет пересечения с осью Оx!\n");
    }
    
    return 0;
}
