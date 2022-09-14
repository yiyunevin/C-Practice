/* 透過 fgets 與 puts 得到且輸出一字串，接著透過 getchar 與 putchar 得到且輸出一字元
** ------------------------------------------------------------------------------
** result:
** Enter a string: apple
** You entered: apple
** 
** Enter a character: apple
** You entered: a
** Enter a string: You entered: pple
** ------------------------------------------------------------------------------
** * getchar & putchar
** * gets / fgets & puts
** * buffer
*/

#include <stdio.h>

int main ()
{
  char c;
  char s[100];
  
  // --- gets / fgets & puts --- //
  
  printf("Enter a string: ");
  // gets(s); // warning: desprecated
  fgets(s, 100, stdin);
  printf("You entered: ");
  puts(s);
  printf("\n");
  
  // --- getchar & putchar --- //
  
  printf("Enter a character: ");
  c = getchar();
  printf("You entered: ");
  putchar(c);
  printf("\n");
  
  // --- gets / fgets & puts --- //
  
  printf("Enter a string: ");
  fgets(s, 100, stdin);
  printf("You entered: ");
  puts(s);
  printf("\n");

  return 0;
} 
