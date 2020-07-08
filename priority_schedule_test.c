#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{
  int priority = 60;  
  int pid;
  pid = fork ();
  if (pid == 0)
  {	
    int pid2 = fork();
    if(pid2 == 0)
    {
        priority = 40;
        set_priority(priority);
    }
    else
    {
        priority = 50;
        set_priority(priority);
    }
  }
  else
  {
  }  
  printf(1, "Priority = %d\n",priority); 
  exit();
}
