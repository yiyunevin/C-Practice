/* 依序印出由第 x 個到最後的陣列元素數值與位址，for 迴圈的「起始值、條件判斷、增減量」都必須使用指向陣列的指標 ptr
** ----------------------------------------------------------------------------------------------------------
** Enter an Interger 0-9 : 7
** [value] ptr + 7 = 17
** [addr]  ptr + 7 = (unsigned int) 4294954012     (hexadecimal)ffffcc1c   (void ptr)0xffffcc1c
** [value] ptr + 8 = 18
** [addr]  ptr + 8 = (unsigned int) 4294954016     (hexadecimal)ffffcc20   (void ptr)0xffffcc20
** [value] ptr + 9 = 19
** [addr]  ptr + 9 = (unsigned int) 4294954020     (hexadecimal)ffffcc24   (void ptr)0xffffcc24
** -----------------------------------------------------------------------------------------------------------
** arithmetic and comparison of pointers
** print address
** address of array
*/

#include<stdio.h>

int main(){
    int arr[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int x;

    do{
        printf("Enter an Interger 0-9 : ");
        scanf("%d", &x);
    }while(x<0 || x>9);
    
    printf("\n");
    for(int *ptr = arr+x; ptr<=&arr[9]; ptr++){
        printf("[value] ptr + %d = %d\n", x, *ptr);
        printf("[addr]  ptr + %d = (unsigned int) %u\t(hexadecimal)%x\t(void ptr)%p\n", x, ptr, ptr, ptr);
        printf("-----------------------------------------------------------------------------------------------------------\n");
        x++;
    }
    return 0;
}
