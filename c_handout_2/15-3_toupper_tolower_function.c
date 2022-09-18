/* 由鍵盤輸入一長度小於 21 的字串 str1，若超過則印出字串與長度，並退出程式。否則將小寫改為大寫、大寫改為小寫並輸出（toupper(char)、tolower(char)）。使用函式 void transform(char *str1, char *str2) 完成 
** ---------------------------------------------------------
** Enter String: "Hello World!"
** -> "hELLO wORLD!"
** ---------------------------------------------------------
** * upper / lower (ctype.h)
** * input string with space
** * one-dimension array call by reference
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void transform(char *str1, char *str2){
  // to upper / lower
  for(int i=0; i<strlen(str1); i++){
    if(isupper(str1[i])) str2[i] = tolower(str1[i]);
    else if(islower(str1[i])) str2[i] = toupper(str1[i]);
  }
}

int main(){
  // read value
  char str1[20], str2[20];
  printf("Enter String: ");
  scanf("%[^\t\n]", str1);
  if(strlen(str1)>21){
    printf("%d, %s.", strlen(str1), str1);
    return 1;
  }
  strcpy(str2, str1);
  transform(str1, str2);
  printf("-> %s\n", str2);
  return 0;
}
