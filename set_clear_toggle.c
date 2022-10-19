#include<stdio.h>

#define BIT 8

int get_bit(int val, int index){
    return ( (val & (1 << index)) > 0 );
}

void printBinary(int val, int bit_size){
    for(int i = bit_size - 1; i >= 0; i--)
        printf("%d", get_bit(val, i));
    printf("\n");
}

int toggle_bit(int val, int index){ 
    return ( val ^ (1 << index) );
}

int set_bit(int val, int index){
    return ( val | (1 << index) );
}

int clear_bit(int val, int index){
    return ( val & ~(1 << index) );
}

int main(){

    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);

    printf("=> ");
    printBinary(n, BIT);

    int idx;
    printf("\nSet Bit at: ");
    scanf("%d", &idx);
    n = set_bit(n, idx);
    printf("=> ");
    printBinary(n, BIT);

    printf("\nClear Bit at: ");
    scanf("%d", &idx);
    n = clear_bit(n, idx);
    printf("=> ");
    printBinary(n, BIT);
    
    printf("\nToggle Bit at: ");
    scanf("%d", &idx);
    n = toggle_bit(n, idx);
    printf("=> ");
    printBinary(n, BIT);

    return 0;
}
