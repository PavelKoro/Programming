/*#include <stdio.h>

int factorial(int n) {
    if(n > 1){
        return n*factorial(n-1);
    } else {
        return 1;
    }
}

int main()
{
    printf("%d\n",factorial(5));
    return 0;
}*/



#include <stdio.h>
#include "my_lib.h"

#define N 3

int main()
{    
    int A[N];
    
    for(int i=0; i < N; i++){
        printf("Введите %d-й эл-т массива: ", i+1);
        A[i] = read_int();
    }
    
    for(int i=0; i < N; i++){
        printf("%d-ый эл-т массива, который равен: %d\n", i+1, A[i]);
    }
    
    return 0;
}

/*#include <stdio.h>
#include "my_lib.h"

long Faktorial(int n) {
    if(n < 0) {
        return -1;
    } else if(n == 0) {
        return 1;
    } else {
        return n * Faktorial(n - 1);
    }

    return n;
}
void test(struct Int_result m) {
            printf("m = {%d %d}\n",m.result, m.has_error);
            m.result = 123;
            m.has_error = 0;
            printf("m = {%d %d}\n",m.result, m.has_error);
}

int main() {
    int number = read_int();
    
    if(Faktorial(number) != -1) {
        printf("%d! = %ld\n", number, Faktorial(number));
    } else {
        printf("Введите положительный или нулевой факториал!\n");
    }

    struct Int_result r = {1 ,2};
    printf("r = {%d %d}\n",r.result, r.has_error);
    test(r);    
    printf("r = {%d %d}\n",r.result, r.has_error);
    
        
    return 0;
}*/

/*#include <stdio.h>
    char space_nop() {
        int ch = getchar();
        
        while(ch == ' ' || ch == '\t' || ch == '\n') {
            ch = getchar();
        }
        
        if(ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '.') {
            printf("Wrong input, eneter number\n");
            return 0;
        }
        
        return ch;
    }
    
int main() {
    char ch = space_nop();
    printf("%c", ch);
    return 0;
}*/
