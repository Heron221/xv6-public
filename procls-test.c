#include "types.h"
#include "stat.h"
#include "user.h"
#include "param.h"



int main()
{
    for(int i = 0 ; i < 3 ; i++)
    {
        int pid = fork();
        if(pid == 0)
        {
            malloc(i);
            sleep(10);
            exit();
        }
    }

    
    struct proc_info *out = malloc(NPROC * sizeof(*out));
    int count2 = procls(out);
    for(int i = 0 ; i < count2 ; i++)
    {
        printf(1, "pid: %d      memsize: %d \n", (out + i)->pid, (out + i)->memsize);
    }
    exit();
}
