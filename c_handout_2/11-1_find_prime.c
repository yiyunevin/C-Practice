/* 	scanf 輸入一整數，印出小於該值的所有質數 (prime)
** * for break
** * check prime number
** * test on onlineGDB
*/

#include <stdio.h>

int main ()
{
  int a, i, j;
  printf("Enter an integer: ");
  scanf("%d", &a);
  for (i=2; i<a; i++){          // check each number less than a
    for(j=2; j<=i/j; j++)     // check each factor
      if ( !(i%j) )
        break;
    if(j > i/j)               // didn't break during the for loop
        printf("%d ", i);
  }
  return 0;
}
