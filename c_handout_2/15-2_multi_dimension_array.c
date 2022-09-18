#include<stdio.h>

int main()
{
  int arr[][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16} };
  char group;
  printf("Enter group ( A ~ D ): ");
  scanf("%c", &group);
  if(!(group >= 65 && group <=68))	// ASCII A ~ D
  {
    printf("Only A B C D");
    return 1;
  }
  printf("%c = ", group);
  group -= 65;				// turn into index
  int len = sizeof(arr[group])/sizeof(int);
  for(int i=0; i<len; i++)
    printf("%d ", arr[group][i]);
  return 0;
}
