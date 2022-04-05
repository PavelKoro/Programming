#include <stdio.h>

int main(){
    FILE *f = fopen("proverb.txt","w");
    fprintf(f, "The rain in Spain stays mainly on tne plain");
    fclose(f);
    return 0;
}
