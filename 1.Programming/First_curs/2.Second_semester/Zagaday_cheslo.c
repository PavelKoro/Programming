#include <stdio.h>

void swap(int *n1, int *n2) {
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}

int main() {
    int Nachalo, End;
    
    printf("Диапозон от: ");
    scanf("%d", &Nachalo);
    
    printf("         до: ");
    scanf("%d", &End);
    
    if(Nachalo > End) {
        swap(&Nachalo, &End);
        printf("Если писать диапозон, то тогда уж такой: [%d, %d]\n", Nachalo, End);
    }
    
    int guess_cheslo = End, copy = 0, copy_end = end, the_end = 0;
    
    printf("Вы загадали %d?\n", guess_cheslo);
    
    while(the_end != 1) {
        char simvol = getchar();
        
        if(simvol == '>') {
        
            guess_cheslo = guess_cheslo/2;
            printf("Вы загадали %d?\n", guess_cheslo);
            copy = guess_cheslo;
            
        } else if(simvol == '<') {
        
            if(guess_cheslo != copy_end) {
                guess_cheslo += (copy/2);
                printf("Вы загадали %d?\n", guess_cheslo); 
                
            } else {
                printf("Играйте по правилам!\n");
            }
            
        } else if(simvol == '=') {
            the_end = 1;
            printf("Ваше число %d!\n", guess_cheslo);
        }
    }

    return 0;
}
