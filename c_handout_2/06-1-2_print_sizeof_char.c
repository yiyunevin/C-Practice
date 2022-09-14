/**印出 「unsigned short 所佔的位元數」與「任意字母多於 1 的英文單字」，中間以 TAB 隔開
*** test on onlineGDB
*/

#include <stdio.h>

int main ()
{
  // 先宣告再印出  
  int a = sizeof(unsigned short);
  char* b = "apple";
  printf ("%d\t%s\n", a, b);
  
  // 不宣告直接印出
  printf ("%ld\t%s\n", sizeof(unsigned short), "apple");

  return 0;
}
