/* 由命令列指定文字檔名稱，讀取一串以空白間隔之數字，印出數字數量與總和
** ------------------------------------------------------------------
** * Usage ./13_file_num_sum f_num_sum.txt 
** ------------------------------------------------------------------
** * read from command line
** * read text file
** * stdlib.h / exit(1)
** * read file seperated by space
*/

#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] )
{
  int count = 0, sum = 0;
  // open file
  FILE* fp;
  fp = fopen(argv[1], "r");
  if(fp == NULL){
    printf("File not exist.\n");
    exit(1);
  }
  // read file
  int n;
  while((fscanf(fp, "%d", &n)) != EOF){
    if(!(n==' ')){
      count ++;
      sum += n;
    }
  }
  fclose(fp);
  printf("Ans = %d, %d.\n", count, sum);
  return 0;
}
