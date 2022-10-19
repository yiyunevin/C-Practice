#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int divide(int* arr, int start, int end){
    int pivot = arr[end];
    int j = start - 1;
    for(int i=start; i<end; i++){
        if(arr[i] < pivot)
            swap(&arr[++j], &arr[i]);
    }
    swap(&arr[++j], &arr[end]);
    return j;
}

void quick_sort(int *arr, int start, int end){
    if(end>start){
        int pivot = divide(arr, start, end);
        quick_sort(arr, start, pivot-1);
        quick_sort(arr, pivot+1, end);
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

    quick_sort(num, 0, size);

    printf("\n\nSorted:\n");
    print_array(num, size);
    printf("\n");

    free(num);
    return 0;
}

