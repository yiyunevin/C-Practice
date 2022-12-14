/* 定義 MIN(x, y)返回較小的數字，x、y由命令列取得，若有其中之一非數字則程式結束
** --------------------------------------------------------------------------
** * #define
** * check if a "string" is a number (isdigit -> a char)
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MIN(x, y) ((x) > (y)) ? (y) : (x)


int isnumber(char *arr){
    int i = strlen(arr);
    while(i--){
        if(arr[i]>='0' && arr[i]<='9')
            continue;
        return 0;
    }
    return 1;
}


int main(int argc, char *argv[])
{
    if(argc<3){
        printf("\nUsage: ./main int1 int2.\n");
        return 1;
    }
    if(!(isnumber(argv[1]) && isnumber(argv[2]))){
        printf("\n Enter integers.\n");
        return 2;
    }
    int min = MIN(atoi(argv[1]), atoi(argv[2]));
    printf("\nmin = %d\n", min);

    return 0;
}
