#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void merge(int *num, int start, int middle, int end){
    
    int i, j, k;

    int len1 = middle - start + 1;
    int len2 = end - middle;

    int *arr1 = (int*)malloc(len1 * sizeof(int));
    for(i=0; i<len1; i++)
        arr1[i] = num[start+i];
    
    int *arr2 = (int*)malloc(len2 * sizeof(int));
    for(i=0; i<len2; i++)
        arr2[i] = num[middle+1+i];

    i = 0; j = 0; k = start;

    while(i<len1 && j<len2){
        if(arr1[i]<=arr2[j])
            num[k++] = arr1[i++];
        else
            num[k++] = arr2[j++];
    }

    while(i<len1)
        num[k++] = arr1[i++];

    while(j<len2)
        num[k++] = arr2[j++];

    free(arr1);
    free(arr2);

}

void merge_sort(int *num, int start, int end){
    if(end>start){
        int middle = (start + end) /2;
        merge_sort(num, start, middle);
        merge_sort(num, middle+1, end);
        merge(num, start, middle, end);
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

    merge_sort(num, 0, size-1);

    printf("\n\nSorted:\n");
    print_array(num, size);
    printf("\n");

    free(num);
    return 0;
}

