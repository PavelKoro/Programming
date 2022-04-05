#include <stdio.h>

int main() 
{    
    printf("  ");
    for(int i=1; i <= 10; i++){
        printf("%2d ", i);
    }       
    printf("\n");

    for(int i=1; i <= 9; i++){
        printf("%d", i);
        
        for(int j=1; j <= 10; j++){
            printf(" %2d", i*j);        
        }
        printf("\n"); 
    }
    return 0;
}
