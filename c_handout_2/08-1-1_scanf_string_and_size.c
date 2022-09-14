/* 透過 fgets 接收一字串，並輸出「<字串長度> "<字串內容>"」
** -----------------------------------------------------
** * sizeof vs. strlen
** * \0 & \n
** * test on onlineGDB
*/

#include <stdio.h>
#include <string.h>

int main ()
{
  // -- 輸入 string -- //
  char str[20];
  printf("Enter a string: ");
  fgets(str, 20, stdin);
  
  // -- 求輸入 string 長度 -- //
  int len = 0;
  //len = sizeof(str)/sizeof(char);   // = 20
  len = (int)strlen(str);             // = (依輸入值而定)
  
  // -- 處理結尾問題（原為 '\n'） -- //
  str[len-1] = '\0';
  
  // -- 印出結果 -- //
  printf("%d \"%s\"", len, str);
  
  return 0;
}
