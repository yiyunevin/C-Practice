#include<stdio.h>
#define BIT 8

int get_bit(int val, int index){
    return ( (val & (1 << index)) > 0 );
}

void print_binary(int val, int b){
    for(int i = b-1; i >= 0; i--)
        printf("%d", get_bit(val, i));
}

int get_lsb(int val){
    return ( val & 0x01 );
}

int get_msb(int val){
    return (( val >> (BIT-1) ) & 0x01);
}

int main(){
    int n;
    printf("Enter an Integer:");
    scanf("%d", &n);
    
    printf("\n=>");
    print_binary(n, BIT);
    printf("\n");

    printf("\nLSB = %d", get_lsb(n));
    printf("\nMSB = %d", get_msb(n));

    return 0;
}
