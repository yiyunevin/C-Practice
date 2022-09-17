/* 撰寫一遞迴函式完成階層計算，若命令列輸入包含非正整數字元，印出錯誤訊息並輸出錯誤訊息至 stderr
** ----------------------------------------------------------------------------------------------------------------------------
** ./main.exe -4 >> -(0), Not a number.
** ./main.exe 2v35 >> v(2), Not a number.
** ./main.exe 3 >> 3! = 6
** ----------------------------------------------------------------------------------------------------------------------------
** * recursive
** * unsigned long overflow if input >= 20
** * (string.h) strlen
** * not digits
** * fprintf -> stderr
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// recursive
int fac(unsigned long n){
  if(n == 1){
    return 1;
  }
  return n * fac(n-1);
}

int main(int argc, char* argv[]){
  if(argc < 2){
    printf("Usage: ./main int.");
    return 1;
  }
  // error process
  int len = strlen(argv[1]);
  for(int i=0; i<len; i++){
    if(!(argv[1][i] >= '0' && argv[1][i] <= '9'))	// not digits or not positive
    {
      fprintf(stderr, "%c(%d), Not a number.", argv[1][i], i+1);
      return(1);
    }
  }
  // factorial
  int n = atoi(argv[1]);
  printf("%d! = %d", n, fac(n));
  return 0;
}
