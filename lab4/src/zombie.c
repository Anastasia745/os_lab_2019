#include <stdio.h>
#include <sys/types.h>
#include <unistd.h> 

int main()
{
    pid_t child_pid;
    int i;
    printf("Parent pid=%d\n", getpid());
    for (i=0; i<10; i++)
    {
        child_pid = fork();
        if (child_pid==0)
        exit(0);
        else
        printf("Child process PID=%i\n", child_pid);
    }
    sleep(60);
    return 0;
}
