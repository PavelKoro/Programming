#include <stdio.h>
#define N 10

void gets2(char* str, int size){
    int i = 0;
    
    while(1){
        int ch = getchar();
        
        if(ch == '\n'){
            str[i] = '\0';
            break;
        } else if(i == size-1){
            str[i] = '\0';
            break;
        } else if(ch == EOF){
            break;
        }
        
        str[i] = ch;
        i++;
    }
}

int main(){
    char Name[N] = {};
    
    printf("Как тебя зовут?\n");
    
    gets2(Name, N);
    
    printf("Hello, %s!\n", Name);
    
    return 0;
}
