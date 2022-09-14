/* 透過 fgets 接收一浮點數，並以整數 5 位、小數 2 位的方式印出，有缺則補 0
** -----------------------------------------------------
** * char to float
** * printf float
** * test on onlineGDB
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  // -- 輸入 float (string -> float) -- //
  char c[20];
  float f;
  printf("Enter a float number: ");
  fgets(c, 20, stdin);
  f = atof(c);

  // -- 印出結果 -- //
  // 5位整數 (缺的補齡) + 小數點 + 2位小數 = 8 位
  printf("You entered: %08.2f\n", f);
  
  return 0;
}
