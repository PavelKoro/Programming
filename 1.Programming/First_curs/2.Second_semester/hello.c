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

int main(int argc, char **argv){
    char Name[N] = {};

    if(argc == 1){
        printf("Как тебя зовут?\n");
        gets2(Name, N);
        printf("Hello, %s!\n", Name);
        
    } else if(argc == 2){
        printf("Hello, %s!\n", argv[1]);
        
    } else if(argc > 2){
        printf("Hello,");
        
        for(int i=1; i<argc-1; i++){
            printf(" %s", argv[i]);
            
            if(i+1 != argc-1){
                printf(", ");
            }
        }
        
        printf(" and %s!\n", argv[argc-1]);
    }
    
    return 0;
}
