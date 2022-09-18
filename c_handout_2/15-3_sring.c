#include<stdio.h>
#include<string.h>
int main(){
  char str1[20];
  char str2[20];
  printf("Enter String1: ");
  scanf("%s", str1);
  if(strlen(str1)>10){
    printf("%d, %s.", strlen(str1), str1);
    return 1;
  }
  printf("Enter String2: ");
  scanf("%s", str2);
  if(strlen(str2)>10){
    printf("%d, %s.", strlen(str2), str2);
    return 1;
  }
  char str3[20];
  if(strcmp(str1, str2) == 0){
    strcpy(str3, str1);
  }
  else if(strcmp(str1, str2) < 0){
    strcat(str2, str1);
    strcpy(str3, str2);
  }
  else{
    strcat(str1, str2);
    strcpy(str3, str1);
  }
  printf("Ans: %s\n", str3);
  return 0;
}
