/* scanf 輸入月份，並輸出季節：Spring 3 - 5、Summer 6 - 8、Autumn 9 - 11、Winter 12 - 2。若無則輸出「<月份>：NOT the month」。使用 switch statement 完成
** * month to season
** * switch statement
** * test on onlineGDB
*/

#include <stdio.h>

int main ()
{
  int month;
  printf ("Enter month(digits): ");
  scanf ("%d", &month);
  
  int season = (month > 0 && month < 13)? (month % 12) / 3 + 1 : month;
  
  switch(season){
    case 1: 
        printf("%d : Winter", month);
        break;
    case 2: 
        printf("%d : Spring", month);
        break;
    case 3: 
        printf("%d : Summer", month);
        break;
    case 4: 
        printf("%d : Autumn", month);
        break;
    default: 
        printf("%d : NOT the month", month);
        break;
  }
  return 0;
}
