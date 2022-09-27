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
