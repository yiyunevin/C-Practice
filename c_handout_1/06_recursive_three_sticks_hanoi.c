/* 河內塔 (Hanoi)：
** 三根柱子分別為 1、2、3，n 個環由小到大分別為 a、b、c、 …。欲將 n 個環由柱 1 移至柱 3，且 
** 1. 一次只能移動一個環
** 2. 過程中大環必在小環下面
** 問：最少移動次數與搬移過程為何？
** ----------------------------------------------------------
** 1 * hanoi
** 2 * recursive function
** *** test with online GDB
*/

#include <stdio.h>

int hanoi(int n, int src, int tmp, int dst, int count)
{
  if(n==1){
    printf("%d -> %d\n", src, dst);
    return ++count;
  }
  else {
    // Step 1. n-1 rings from src stick to tmp stick
    count = hanoi(n-1, src, dst, tmp, count);
    // Step 2. the n th ring from src stick to dst
    printf("%d -> %d\n", src, dst);
    count++;
    // Step 3. n-1 rings from tmp stick to dst stick
    count = hanoi(n-1, tmp, src, dst, count);
    return count;
  }
}

int main()
{
  int n, count;
  printf("Hanoi: ");
  scanf("%d", &n);
  count = hanoi(n, 1, 2, 3, 0);
  printf("Total step: %d", count);
  return 0;
}
