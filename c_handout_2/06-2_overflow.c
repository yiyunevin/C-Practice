/* 宣告 short 變數 a 與 b，a 為 32000，而 b = a + 800。觀察結果是否溢位。
** ----------------------------------------------------------------------
** * print short
** * overflow
** * limits.h
** * test on onlineGDB
*/

#include <stdio.h>
#include <limits.h>

int main ()
{
  short a = 32000;
  short b = a + 800;
  
  printf("SHRT_MAX = %d; SHRT_MIN = %d.\n", SHRT_MAX, SHRT_MIN);    // SHRT_MAX = 32767; SHRT_MIN = -32768.
  printf("a = %d; b = a + 800 = %d.\n", a, b);                      // a = 32000; b = a + 800 = -32736.

  return 0;
}
