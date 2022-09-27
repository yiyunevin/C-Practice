/* 定義 tokenpast(N) 以 token pasting 預處理運算子組合 token 與 n，宣告 int token 1 = 10，token 2 = 11，token 3 = 21，執行 tokenpast 印出 tokenN * 2 = x（由__DATE__取得的今日日期），N 僅限 1~3，否則輸出「Only 1 2 3」並結束程式。
** --------------------------------------------------------------------------------
** token pasting
** preprocessor
*/

#include<stdio.h>

// stringize and token-pasting
# define tokenpast(N)   \
    printf("\ntoken" #N " * 2 = %d. %s\n", token##N * 2, __DATE__)

int main(){
    int n;
    printf("Enter 1, 2 or 3 : ");
    scanf("%d", &n);

    int token1 = 10;
    int token2 = 11;
    int token3 = 21;
    
    // preprocessor cannot use variables that won't be defined until runtime
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
