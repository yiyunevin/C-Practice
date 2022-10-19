#include<stdio.h>
#include<stdlib.h>

int pow_of_two(int x){
    /* -------------------------------------
     *  x   = 8 => 8'b 0000 1000
     *  x-1 = 7 => 8'b 0000 0111
     * -------------------------------------
     *  x & (x-1) == 0 if x is power of 2
     * -------------------------------------*/
    
    return ( (x>0) && (x & (x-1))==0 );
}

int main(int argc, char *argv[]){

    if (argc < 2){
        printf("Usage: %s <integer>", argv[0]);
        return 1;
    }

    if(pow_of_two(atoi(argv[1])))
        printf("%d is power of 2.", atoi(argv[1]));
    else
        printf("%d is NOT power of 2.", atoi(argv[1]));

    return 0;
}
