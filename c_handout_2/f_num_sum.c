#include<stdio.h>
#include<stdlib.h>

int main( int argc, char *argv[] )
{
  int count = 0, sum = 0;
  // open the file
  FILE* fp;
  fp = fopen(argv[1], "r");
  if(fp == NULL){
    printf("File not exist.\n");
    exit(1);
  }
  // read the file
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
