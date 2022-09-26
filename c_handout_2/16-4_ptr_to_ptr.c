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
