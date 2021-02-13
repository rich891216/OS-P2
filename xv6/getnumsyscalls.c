#include <stdio.h>
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("getnumsyscalls: invalid command line\n");
        exit(1);
    }
    int pid = atoi(argv[1]);
    return getnumsyscalls(pid);
}

int getnumsyscalls(int pid) {
    if(isvalidpid(pid) == 0){
        return -1;
    }
    int count = 0;
    
    return 0;
}
int isvalidpid(int pid) {
    if (kill(pid, 0) != 0) {
        // process doesn't exist
        return 0;
    } else {
        // process exists
        return 1;
    }
}