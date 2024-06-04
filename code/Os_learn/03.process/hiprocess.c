#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h> 

int main(int argc, char const *argv[])
 {
     // getpid()函数返回当前进程的ID号
    printf("Before fork Process id:%d\n", getpid());        

    
    printf("After fork Process id:%d\n", getpid());         
    pause();        
    return 0;
 }