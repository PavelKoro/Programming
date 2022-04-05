#include <stdio.h>

int main(int argc, char **argv){
    FILE *f = fopen("proverb.txt", "r");
    
    int i = 0;
    
    while(!feof(f)){
        int ch = fgetc(f);
        if (ch != EOF) {
            putchar(ch);
        }

        if(ch == '\n'){
            i++;
        }
    }
    
    fclose(f);
    
    putchar('\n');
    printf("%d\n", i);
    
    return 0;
}
