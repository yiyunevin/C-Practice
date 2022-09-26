/* 宣告整數 x 與指標變數 ptr 指向 x，雙重指標 pptr 指向 ptr，以十進位印出三者
** --------------------------------------------------------------------------
** x     = [-13268] 1.
** *ptr  = [-13280][-13268]1.
** **ptr = [-13288][-13280][-13268] 1.
** --------------------------------------------------------------------------
** pointer to pointer
*/

#include<stdio.h>

int main(){
    int x = 1;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("x     = [%d] %d. \n", &x, x);
    printf("*ptr  = [%d][%d]%d. \n", &ptr, ptr, *ptr);
    printf("**ptr = [%d][%d][%d] %d. \n", &pptr, pptr, *pptr, **pptr);
    return 0;
}
