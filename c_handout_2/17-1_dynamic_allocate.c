/* 宣告 name 及 desc 為 char 陣列指標，由命令列提供字串長度配置記憶體長度，並在退出前釋出記憶體。用 for 迴圈處理多筆資料
** -----------------------------------------
** Usage: ./main David EE Fanny CSIE
** -----------------------------------------
** * malloc / free / stdlib.h
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc, char *argv[])
{
    if (argc < 3){
        printf("Usage : ./main name desc ...\n");
        return 1;
    }
    
    char *name;
    char *desc;
    for (int i=1; i<argc; i+=2 ){
        name = malloc( ( sizeof(argv[i]) / sizeof(char) ) * sizeof(char) );
        desc = malloc( sizeof(argv[i+1]) );
        if(name == NULL || desc == NULL){
            printf("Failed to allocate.\n");
            return 2;
        }
        strcpy(name, argv[i]);
        strcpy(desc, argv[i+1]);
        printf("Name : %s\nDesc : %s\n", name, desc);
        free(name);
        free(desc);
    }

    return 0;
}
