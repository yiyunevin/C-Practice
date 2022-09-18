/* 宣告 int arr [][4] 代表 A、B、C、D 4 種產品於各據點的銷售量，根據輸入 char 印出對應數字，若超出 A ~ D 的範圍則印「Only A B C D」
** ------------------------------------------------------------------------------------------------------------------------
** Enter group ( A ~ D ): B
** B = 5 6 7 8
** ------------------------------------------------------------------------------------------------------------------------
** * multi-dimesion array
** * size of array
** * ASCII of capital alphabet
*/

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
