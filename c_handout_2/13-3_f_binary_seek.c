/* 命令列輸入：讀取檔案（內容：abcdefghijk）、寫入檔案、從讀取檔案開頭位移的位元數、寫入位元數。讀寫皆以二進位方式開啟，每次讀取 1 個位元組
** ------------------------------------------------------------------
** * Usage  : ./13-3_f_binary_seek.exe f_binary_seek.r out.w 3 4
** * Result : out.txt >> defg
** ------------------------------------------------------------------
** * read from command line
** * read/write binary file
** * fseek 
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
  FILE *fp1;
  FILE *fp2;
  int diff, num;
  diff = atoi(argv[3]);
  num = atoi(argv[4]);

  fp1 = fopen(argv[1], "rb");
  fp2 = fopen(argv[2], "wb");
  if(fp1 == NULL){
    printf("File %s not exist.", argv[1]);
    return 1;
  }
  else if(fp2 == NULL){
    printf("File %s not exist.", argv[2]);
    return 1;
  }
  
  char ch;
  fseek(fp1, diff, SEEK_SET);
  //while( fread( &ch, sizeof(ch), 1, fp1) != 0 )
  for(int i = 0; i < num; i++)
  {
    fread(&ch, sizeof(ch), 1, fp1);
    fwrite(&ch, sizeof(ch), 1, fp2);
  }
  fclose(fp1);
  fclose(fp2);
  return 0;
}
