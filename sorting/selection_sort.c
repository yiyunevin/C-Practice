#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void selection_sort(int *num, int size){
    int i, j, min;
    for (i=0; i<size; i++){
        min = i;
        for(j=i+1; j<size; j++){
            if(num[j]<num[min])
                min = j;
        }
        if(i!=j){
            int temp = num[min];
            num[min] = num[i];
            num[i] = temp;
        }
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

    selection_sort(num, size);

    printf("\n\nSorted:\n");
    print_array(num, size);
    printf("\n");

    free(num);
    return 0;
}

