/*
** 	輸入兩整數的四則運算式 (a+b, a-b, a*b, a/b, a%b)，印出其計算結果
**  ---------------------------------------------------------------
**  1 * preprocessor
**  2 * read char array from command line
*/
#include <stdio.h>
#include <stdlib.h>
#define ADD(a, b) ((a)+(b))
#define SUB(a, b) ((a)-(b))
#define TIMES(a, b) ((a)*(b))
#define DIV(a, b) ((a)/(b))
#define MOD(a, b) ((a)%(b)) 

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Usage: \"main int1+int2\"");
        return -1;
    }
    
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[1]+2);

    if(*(argv[1]+1) == '+')
        printf("%d + %d = %d", a, b, ADD(a, b));
    else if(*(argv[1]+1) == '-')
        printf("%d - %d = %d", a, b, SUB(a, b));
    else if(*(argv[1]+1) == '*')
        printf("%d * %d = %d", a, b, TIMES(a, b));
    else if(*(argv[1]+1) == '/')
        printf("%d / %d = %d", a, b, DIV(a, b));
    else if(*(argv[1]+1) == '%')
        printf("%d mod %d = %d", a, b, MOD(a, b));
    else
        printf("Function Not Found.");

    return 0;
}
