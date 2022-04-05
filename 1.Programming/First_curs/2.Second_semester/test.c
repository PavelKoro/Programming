#include <stdio.h>

int main (void)
{  
    FILE* mf = fopen ("test1.txt","r");;
    char str[1024];
    char *estr;
    int count = 0;
    
    if (mf == NULL) {
        printf ("ошибка\n"); 
        return -1;
        
    }

    printf ("Считаны строки:\n");

    while (1) {
        estr = fgets (str, sizeof(str), mf);
        
        if (estr == NULL) {
            if ( feof (mf) != 0) {  
            printf ("Конец файла\n");
            break;
            
            } else {
                printf ("Ошибка!\n");
                break;
            }
        }
        count += 1;
        printf ("%d: %s", count, str);
    }

    printf ("Закрытие файла: ");

    if ( fclose (mf) == EOF) printf ("ошибка\n");
    else printf ("выполнено\n");

    return 0;
} 

/*#include <stdio.h>

int main() {    
    FILE* file = fopen("test1.txt", "r");
    char buffer[1024];
    
    while(1) {
        char strk = fgets(buffer, 1024, file);
        
        if (strk == NULL) {
            if(feof(file) != 0) {
                printf("\n Чтение файла закончено!\n");
            } else {
                printf("\n Ошибка!\n");   
            }
        }
            printf("%s\n", buffer);
    }
    
    fclose(file);
    
    return 0;
}
*/













/*#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {
    (void) execle("/bin/nano", "/bin/cat", "my_lib.h", 0, envp);
    printf("Error on program start\n");
    exit(-1);
    return 0;
}*/


/*#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[]) {
    pid_t pid, ppid;
    int a = 0; 

    pid = getpid();
    ppid = getppid();
    
    pid_t fr = fork();
    
    if(fr == -1) {
        printf("Ошибка \n");
    } else if(fr == 0) {
        printf("Ребенок(Клон)");
        (void) execle("/bin/cat", "/bin/cat", "my_lib.h", 0, envp);
        printf("Error on program start\n");
        exit(-1);
        return 0;
        
    } else {
        printf("Родитетель");
        printf("My pid = %d, my ppid = %d result = %d\n", (int)pid, (int)ppid, a);
    }
    
    return 0;
}*/

/*#include<stdio.h>

int main() {
	printf("Введите номер по журналу группы:\n"); 
	int N; 
	scanf("%d", &N); 
	
	int p = ((N-1)/4)+1-1; 
	int q = N - 6*((N-1)/6)-1; 
	
	printf("p=%d q=%d \n", p+1, q+1); 
	
	int M[10][10]; 
	M[0][0] = 2; 
	M[0][1] = 1; 
	M[0][2] = 3; 
	M[0][3] = 0; 
	M[0][4] = -5; 
	M[0][5] = 1; 
	M[0][6] = 1; 
	
	M[1][0] = 3; 
	M[1][1] = 2; 
	M[1][2] = 4; 
	M[1][3] = -1; 
	M[1][4] = -7; 
	M[1][5] = 3; 
	M[1][6] = 0; 
	
	M[2][0] = -1; 
	M[2][1] = 0; 
	M[2][2] = -2; 
	M[2][3] = -1; 
	M[2][4] = 3; 
	M[2][5] = 1; 
	M[2][6] = -2; 
	
	M[3][0] = 1; 
	M[3][1] = -2; 
	M[3][2] = 4; 
	M[3][3] = 5; 
	M[3][4] = -5; 
	M[3][5] = -7; 
	M[3][6] = 8; 
	
	M[4][0] = 0; 
	M[4][1] = 1; 
	M[4][2] = -1; 
	M[4][3] = -2; 
	M[4][4] = 1; 
	M[4][5] = 3; 
	M[4][6] = -3; 
	
	M[5][0] = -2; 
	M[5][1] = -1; 
	M[5][2] = -2; 
	M[5][3] = 0; 
	M[5][4] = 5; 
	M[5][5] = -1; 
	M[5][6] = -1; 
	
	printf("Матрица А|b':\n"); 
	for (int i=0; i<6; i++){
        	if(i == q) {
        		i++; 
        	}
        	putchar('(');
        	for (int j=0; j<7; j++){
        		if(j == p) {
        			j++; 
        		} else if(j == 6) {
        			putchar('|');
        		}
            		printf ("%3d", M[i][j]);
        	}
        	printf("  )");
        	putchar('\n');
    	}
    
    return 0; 
	
}*/
