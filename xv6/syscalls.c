int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("syscalls: invalid command\n");
        exit(1);
    }
    int N = atoi(argv[1]);
    int g = atoi(argv[2]);

    // N is the total number of system calls
    // g is the number of the successful system calls
    if(N < 1 || g < 1) {
        printf("N and g must be >= 1\n");
        exit(1);
    }
int mypid = getpid();

// TODO:
// loop to call N completed system calls and
// g successfully completed system calls

printf("%i %i\n", getnumsyscalls(mypid), getnumsyscallsgood(mypid));
    
return 0;
}