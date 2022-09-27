#include<stdio.h>

# define tokenpast(N)   \
    printf("\ntoken" #N " * 2 = %d. %s\n", token##N * 2, __DATE__)

int main(){
    int n;
    printf("Enter 1, 2 or 3 : ");
    scanf("%d", &n);

    int token1 = 10;
    int token2 = 11;
    int token3 = 21;

    switch(n){
        case 1:
            tokenpast(1);
            break;
        case 2:
            tokenpast(2);
            break;
        case 3:
            tokenpast(3);
            break;
        default:
            printf("\nOnly 1, 2 or 3.\n");
    }
    return 0;
}
