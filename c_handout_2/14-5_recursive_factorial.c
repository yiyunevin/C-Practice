#include<stdio.h>
#include<stdlib.h>
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
  int n = atoi(argv[1]);
  printf("%d! = %d", n, fac(n));
  return 0;
}
