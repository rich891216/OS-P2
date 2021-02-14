#include "types.h"
#include "stat.h"
#include "user.h"
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf(2, "getnumsyscallsgood: invalid command line\n");
        exit();
    }
    int pid = atoi(argv[1]);
    return getnumsyscallsgood(pid);
}