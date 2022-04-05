#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    
    pid_t id = getpid();
    printf("ID: %d \n", id);
    printf("ParID: %d \n", getppid());
    return 0;
}

