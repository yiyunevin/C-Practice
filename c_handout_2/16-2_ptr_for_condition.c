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
