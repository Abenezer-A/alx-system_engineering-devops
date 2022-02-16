#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int infinite_loop(void);
/**
  * main - entry point, creates zombie processes
  */

int main(void)
{
    int i;
    pid_t child_id;
    
    for (i=0; i < 5;i++)
    {
        child_id = fork();
        if (child_id > 0)
           printf("Zombie process created, PID: %ld\n", (long int) child_id);
        else
           exit(0);
    }
    infinite_loop();
    return (0);
}
int infinite_loop(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}

