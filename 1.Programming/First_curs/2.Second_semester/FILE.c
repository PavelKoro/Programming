 #include <stdio.h>
 
 int main(int argc, char **argv) {
    FILE* f = fopen(argv[1], "r");
    
    while(1) {
        int dd;
        int r = fscanf(f, "%d", &dd);
        
        if (r == EOF) {
            break;
        }
        
        printf("%d\n", dd);
    }
    
    
    
    
    fclose(f);
    return 0;
 }
