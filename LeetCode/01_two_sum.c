#include<stdio.h>
#include<stdlib.h>

int *twoSum(int* nums, int numLen, int target)
{
    int find = 0;
    // static int ans[2] = {-1};
    int *ans = (int*)malloc(2*sizeof(int));
    for(int i=0; i<numLen-1; i++){
        for(int j=i+1; j<numLen; j++){
            if(nums[i] + nums[j] == target){
                ans[0] = i;
                ans[1] = j;
                find = 1;
                break;
            }
        }
        if(find) break;
    }
    if(!find){
        ans[0] = -1;
        ans[1] = -1;
    }
    return ans;
}

int main(int argc, char* argv[]){

    if(argc < 4){
        printf("Usage: %s num1 num2 ... target.\n", argv[0]);
        return 1;
    }
    int *nums;
    nums = (int *)malloc((argc-2) * sizeof(int));
    int i;
    for(i=1; i<argc-1; i++)
        nums[i-1] = atoi(argv[i]);
    int target = atoi(argv[argc-1]);
    int len = argc-2;
    // int nums[] = {3, 2, 4};
    // int target = 6;
    // int len = sizeof(nums) / sizeof(*nums);

    int *ans = twoSum(nums, len, target);
   
    if(ans[0] < 0)
        printf("No answer.\n");
    else{
        printf("Input: nums = [");
        for(i=0; i<len; i++){
            if(i != len-1)
                printf("%d,", nums[i]);
            else
                printf("%d", nums[i]);
        }
        printf("], target = %d\n", target);
        printf("Output: [%d,%d]\n", ans[0], ans[1]);
    }
    free(ans);
    return 0;
}
