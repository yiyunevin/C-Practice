/*	費氏數列 (Fibonacci)：利用遞迴函式，求出 f(n) = f(n-1) + f(n-2)
** ---------------------------------------------------------------
** 1 * recursive function
** 2 * Fibonacci
** *** test with online GDB
*/

#include <stdio.h>

int f(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return f(n-2) + f(n-1);
}

int main()
{
    int n, fib;
    printf("Fibonacci: ");
    scanf("%d", &n);
    fib = f(n);
    printf("Ans. = %d", fib);
    return 0;
}
