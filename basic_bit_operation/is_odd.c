#include<stdio.h>

#define BIT 8

int get_bit(int val, int index){
    return ( (val & (1 << index)) > 0 );
}

void printBinary(int val, int bit_size){
    for(int i = bit_size - 1; i >= 0; i--)
        printf("%d", get_bit(val, i));
}

int is_odd(int val){ 
    return ( val & 1 );     // val % 2
}
int main(){

    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);

    printf("=> ");
    printBinary(n, BIT);

    if (is_odd(n))
        printf("\nis odd.");
    else
        printf("\nis even");

    return 0;
}
