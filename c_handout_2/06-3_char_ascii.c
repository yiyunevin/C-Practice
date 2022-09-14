/* 同時宣告與定義 char ch ='#'，印出「ASCII of # = XX」與「ASCII XX = #」
** ---------------------------------------------------------------------
** * char and ASCII code
** * test on onlineGDB
*/

#include <stdio.h>

int main ()
{
  char ch = '#';
  printf("ASCII of # = %d; ASCLL %d = %c", ch, ch, ch);
  // ASCII of # = 35; ASCLL 35 = #

  return 0;
}
