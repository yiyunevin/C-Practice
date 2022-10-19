/* Usage:
 * ./main 0 0 1 2 1 3 3 4 8 8 2  => The Ans is "4".
 * */

#include<stdio.h>
#include<stdlib.h>  // for atoi & malloc

/* ----------------------------------------------------------------------
 * XOR : 兩者相同得 0、不同則得 1
 * ----------------------------------------------------------------------
 * => ( a ^ b ) ^ c = (a ^ b ^ c)  => (未曾 XOR c) ^ c = (曾   XOR c)
 * => ( a ^ b ) ^ b = (a)          => (曾   XOR b) ^ b = (未曾 XOR b)
 * ----------------------------------------------------------------------
 * 本題假設除了所求之外，其餘數字皆出現二次，因此一定可以消除
 * ----------------------------------------------------------------------
 * */

int single_num(int *num, int size){
    int single = 0;
    for(int i=0; i<size; i++){
        single ^= num[i];
    }
    return single;
}

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("Usage: %s int1 int2 ...", argv[0]);
        return 1;
    }

    int n = argc - 1;                               // size  of array
    int *num = (int*)malloc( n * sizeof(int) );     // value of array
    for(int i=0; i<n; i++){
        num[i] = atoi(argv[i+1]);
    }

    printf("The Single Number = %d", single_num(num, n));
    free(num);

    return 0;
}
