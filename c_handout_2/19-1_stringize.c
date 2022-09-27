/* 定義 happy_for(name)，輸出「Happy name's Day! 月  日  年」並以 stringize 預處理運算子轉換參數
** 若輸入等於 5 則 name 為 Mother，8 則為 Father。日期則使用預定義巨集 __DATE__。
** ------------------------------------------------------------------------------------------------------
** * macro continuation (\)
** * preprocessor stringize (#)
** * 
*/

#include<stdio.h>

#define happy_for(name) \
    printf("\nHappy " #name"'s Day! %s\n", __DATE__)

int main(){

    int x;
    printf("Enter 5 or 8: ");
    scanf("%d", &x);

    if(x == 5){
        happy_for(Mother);
    }else if(x == 8){
        happy_for(Father);
    }else{
        printf("Only 5 or 8\n");
    }
    return 0;
}
