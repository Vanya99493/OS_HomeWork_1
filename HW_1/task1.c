#include "sys/wait.h"
#include "stdio.h"
#include "unistd.h"

int main()
{
    int pid = fork();

    if (pid == 0)
    {
        fork();
    }
    else
    {
        if (fork() == 0)
        {   
            if(fork() == 0)
            { 
                fork();
            }
            else{}
        }   
        else
        {
            fork();
        }
    }

    sleep(1000);
    return 0;
}