/*輸入 a，並以 nested loop 畫出 a 層的三角形
** * calculate base
** * test on onlineGDB
*/

#include <stdio.h>

int main ()
{
  int a = 0;
  printf("Enter an integer less than 10: ");
  scanf("%d", &a);
  int base = a*2-1;
  int current_base;
  
  for(int i=1; i<=a; i++){
      current_base = i*2-1;
      for(int j=0; j<(base-current_base)/2; j++)    // front space
          printf(" ");
      for(int j=0; j<current_base; j++)             // digits
          printf("%d", i);
      printf("\n");
  }
  return 0;
}
