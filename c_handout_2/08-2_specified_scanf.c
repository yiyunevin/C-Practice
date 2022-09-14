/* 輸入「<任意整數 a><任意字串 b><任意整數 c>」並輸出「<b> : <a> + <c> = <sum of a and c>」
** ------------------------------------------------------------------------------------------
** * specified scanf (char)
** * %[0-9] : unsigned integer
** * %[0-9-] : signed integer
** * %[A-Z] : capital letters
** * %[a-z] : lowercase letters
** * char to integer
** * test on onlineGDB
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char a[20], b[20], c[20];
  printf("Enter int1string1int2: ");
  scanf("%[0-9-]%[A-Z a-z]%[0-9-]", a, c, b);
  
  int aa = atoi(a);
  int bb = atoi(b);
  printf("> %s : %d + %d = %d", c, aa, bb, aa+bb);
  
  return 0;
}
