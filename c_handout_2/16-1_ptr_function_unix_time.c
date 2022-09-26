/* 透過 call by ref. 的方式賦予 unsigned long sec 的值為從 1970 年 1 月 1 日 0 時 0 分 0 秒到現在的秒數（UNIX時間 / POSIX 時間）
** ---------------------------------------------------------------------------------------------------------------------------
** * call by reference
** * POSIX / UNIX TIME
*/

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
    return 0;
}
