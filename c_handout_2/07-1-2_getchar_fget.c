/* 透過 fgets 與 puts 得到且輸出一字串，接著透過 getchar 與 putchar 得到且輸出一字元
** ------------------------------------------------------------------------------
** result:
** Enter a string: apple
** You entered: apple
** 
** 
** Enter a character: a
** You entered: a
** 
** Enter a string: apple
** You entered: apple
** ------------------------------------------------------------------------------
** * getchar & putchar
** * gets / fgets & puts (本身就帶一次 newline)
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
  
  while(getchar()!='\n');
  
  printf("\n\n");

  // --- gets / fgets & puts --- //
  
  printf("Enter a string: ");
  // gets(s); // warning: desprecated
  fgets(s, 100, stdin);
  printf("You entered: ");
  puts(s);
  printf("\n");

  return 0;
}
