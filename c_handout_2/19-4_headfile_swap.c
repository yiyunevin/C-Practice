/* 撰寫多個檔案：swap.h 與 swap.cpp，call by reference 且 x、y 由命令列取得 (with swap.h, swap.c)
** ------------------------------------------------------------------------
** * headfile
** * compile multiple files
** * check if a "string" is an integer
*/

#include"swap.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ADD_ONE_TWO(x,y) (x) + (y) * 2

int isnumber(char *arr){
    int i = strlen(arr);
    while(i--){
        if(arr[i]>='0' && arr[i]<='9')
            continue;
        return 0;
    }
    return 1;
}

int main (int argc, char *argv[])
{
    if (argc < 3){
        printf("Usage: %s int1 int2 \n", argv[0]);
        return 1;
    }
    if(!(isnumber(argv[1]) && isnumber(argv[2]))){
        printf("%s or %s NOT a number.\n", argv[1], argv[2]);
        return 2;
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    swap(&a, &b);
    printf("%d + %d * 2 = %d", a, b, ADD_ONE_TWO(a, b));
    return 0;
}
