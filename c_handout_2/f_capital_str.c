#include<stdio.h>
int main(int argc, char *argv[])
{
  FILE* fp1;
  FILE* fp2;
  // read file
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
  fprintf(fp2,"\b");
  fclose(fp1);
  fclose(fp2);
  return 0;
}
