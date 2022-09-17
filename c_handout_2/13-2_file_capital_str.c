/* 由命令列指定讀取與寫入之文字檔名稱，讀取以空白間隔之數段字串，只寫出大寫開頭的字串並各自接一個冒號
** ------------------------------------------------------------------
** * Usage  : ./13-2_file_capital_str file_capital_str.txt out.txt
** * Result : out.txt >> Rjof:Djpojkl:Wdsfds:
** ------------------------------------------------------------------
** * read from command line
** * read/write text file
** * read strings seperated by space
** * capital letters
*/

#include<stdio.h>
int main(int argc, char *argv[])
{
  FILE* fp1;
  FILE* fp2;
  fp1 = fopen(argv[1], "r");
  fp2 = fopen(argv[2], "w");
  if(fp1 == NULL){
    printf("File %s not exist.\n", argv[1]);
    return 1;
  }
  if(fp2 == NULL){
    printf("FILE %s not exist.\n", argv[2]);
    return 1;
  }
  char buff[10];
  while((fscanf(fp1,"%s",buff))!=EOF)
  {
    if(buff[0]<97)  // ascii 97 = a
      fprintf(fp2, "%s:", buff);
  }
  fclose(fp1);
  fclose(fp2);
  return 0;
}
