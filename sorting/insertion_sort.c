#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertion_sort(int *num, int size){
    int i, j, key;
    for (i=1; i<size; i++){
        key = num[i];
        j = i-1;
        while(j >= 0 && num[j]>key){
            num[j+1] = num[j];  // num[i] would be replaced
            j--;
        }
        num[j+1] = key;
    }
}


void print_array(int num[], int size){
    for(int i=0; i<size; i++){
        printf("%3d ", num[i]);
        if((i+1) % 10 == 0)
            printf("\n");
    }
}

int main(){

    srand(time(NULL));

    int size;
    do{
        printf("Enter the size of Array ( 1 ~ 25 ): ");
        scanf("%d", &size);
    }while( size > 25 || size < 1 );

    int *num = (int*)malloc(size * sizeof(int));
    for(int i=0; i<size; i++){
        num[i] = 1 + rand() % 100;
    }

    printf("\nOriginal:\n");
    print_array(num, size);

    insertion_sort(num, size);

    printf("\n\nSorted:\n");
    print_array(num, size);
    printf("\n");

    free(num);
    return 0;
}

