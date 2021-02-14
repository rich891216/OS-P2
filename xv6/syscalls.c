#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf(2, "syscalls: invalid command\n");
        exit();
    }
    int N = atoi(argv[1]);
    int g = atoi(argv[2]);

    // N is the total number of system calls
    // g is the number of the successful system calls
    if(N < 1 || g < 1) {
        printf(2, "N and g must be >= 1\n");
        exit();
    }
int mypid = getpid();

// TODO:
// loop to call N completed system calls and
// g successfully completed system calls
for(int i = 1; i < N; i++) {
    if(i <= g) {
        kill(-1);
    } else {
        getpid();
    }
}

printf(1, "%d %d\n", getnumsyscalls(mypid), getnumsyscallsgood(mypid));
    
return 0;
}