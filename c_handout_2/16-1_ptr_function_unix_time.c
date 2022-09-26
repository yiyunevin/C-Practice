#include<stdio.h>
#include<time.h>

void getSeconds(unsigned long *sec)
{
    *sec = time(NULL);
}

int main()
{
    unsigned long sec;
    getSeconds(&sec);
    printf("UNIX/POSIX Time = %ld. \n", sec);
}
