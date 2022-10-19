#include<stdio.h>

#define BIT 8

int get_bit(int val, int index){
    return ( (val & (1 << index)) > 0 );
}

void printBinary(int val, int bit_size){
    for(int i = bit_size - 1; i >= 0; i--)
        printf("%d", get_bit(val, i));
}

/* ~x = -(x+1) */

int add_one(int val){ 
    return ( -(~val) );
}

int sub_one(int val){
    return (~(-val));
}

int main(){

    int n;
    printf("Enter an Integer: ");
    scanf("%d", &n);

    printf("=> ");
    printBinary(n, BIT);
    printf("\n");

    n = add_one(n);
    printf("\nADD ONE = %d ( ", n);
    printBinary(n, BIT);
    printf(" )");
    
    n = sub_one(n);
    printf("\nSUB ONE = %d ( ", n);
    printBinary(n, BIT);
    printf(" )");

    return 0;
}
