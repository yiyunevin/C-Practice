#include<stdio.h>

#define BIT 8

int get_bit(int val, int index){
    return ( (val & (1 << index)) > 0 );
}

void printBinary(int val, int bit_size){
    for(int i = bit_size - 1; i >= 0; i--)
        printf("%d", get_bit(val, i));
}

void swap(int* x, int* y){ 
    *x = *x ^ *y;      // x' = ( x ^ y )
    *y = *x ^ *y;      // y  = ( x ^ y ) ^ y = x
    *x = *x ^ *y;      // x  = ( x ^ y ) ^ x = y
}
int main(){

    int x, y;
    printf("Enter two Integer: ");
    scanf("%d %d", &x, &y);

    printf("\nYour Input: \n  x = %d \n  y = %d\n", x, y);
    swap(&x, &y);
    printf("\nAfter Swap: \n  x = %d \n  y = %d\n", x, y);
    
    return 0;
}
