/* 
** 輸入三個整數 a、b、c，印出此三值的最大值、最小值、總和及平均值
** -----------------------------------------------------------
** 1 * ternary operator
** 2 * char to integer
** 3 * read from command line
** *** test with online GDB
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if(argc < 4){
        printf("Usage: \"main int1 int2 int3\"");
        return -1;
    }
    
    int a, b ,c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    
    printf("Got number: %d, %d, %d.\n", a, b, c);
    
    int temp = 0;
    // max number
    temp = (a >= b)? a : b;
    temp = (c >= temp)? c: temp;
    printf("Max: %d\n", temp);
    // min number
    temp = (a <= b)? a : b;
    temp = (c <= temp)? c: temp;
    printf("Min: %d\n", temp);
    // summation
    temp = a + b + c;
    printf("Sum: %d\n", temp);
    // average
    temp = temp / 3;
    printf("Average: %d\n", temp);
    return 0;
}
