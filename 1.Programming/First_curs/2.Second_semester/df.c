#include <stdio.h>
#include <string.h>

void df(char *fl1, char *fl2) {
    int count = 0;

    FILE* file1 = fopen(fl1, "r");
    FILE* file2 = fopen(fl2, "r");
    
    char strk1[1024];
    char strk2[1024];
    char *estr1;
    char *estr2;
    
    while(1) {
        count += 1;
        estr1 = fgets(strk1,  sizeof(strk1),  file1);
        estr2 = fgets(strk2,  sizeof(strk2),  file2);

        if((estr1 != NULL) && (estr2 != NULL)) {
            int result = strcmp(estr1, estr2);
            if(result) {
                printf("#%d > %s\n", count, strk1);
                printf("#%d < %s\n", count, strk2);
            } 
            
        } else if(estr1 == NULL && estr2 != NULL) {
            printf("#%d < %s\n", count, strk2);
            
        } else if(estr1 != NULL && estr2 == NULL) {
            printf("#%d > %s\n", count, strk1);
        } else {
            fclose(file1);
            fclose(file2);
            break;
        }
    }
}

int main(int argc, char** argv) {
    df(argv[1], argv[2]);
    
    return 0;
}
