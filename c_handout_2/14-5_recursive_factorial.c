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
  int n = atoi(argv[1]);
  printf("%d! = %d", n, fac(n));
  return 0;
}
