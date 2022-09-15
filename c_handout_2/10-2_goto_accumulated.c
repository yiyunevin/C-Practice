/* scanf 輸入兩整數 a b，設計一名為 STARTADD 的 goto label，由 a 累加至 b (或 b 至 a，是大小關係而定)
** * goto as loop
** * test on onlineGDB
*/

#include <stdio.h>

int main ()
{
  int a, b;
  printf ("Enter two integers: ");
  scanf ("%d %d", &a, &b);
  
  int st = (a>b)? b : a;
  int en = (a>b)? a : b;
  int sum = st;
  printf("%d", st);
  
  STARTADD:
  if(st < en){
      sum += ++st;
      printf(" + %d", st);
      goto STARTADD;
  }
  printf(" = %d", sum);
  return 0;
}
