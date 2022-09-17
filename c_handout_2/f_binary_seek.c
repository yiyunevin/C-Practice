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
