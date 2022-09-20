/* 定義 structure student 包含 char name[20]、unsigned int sid、unsigned short score，從命令列指定檔案輸入資料，並存入 structure 中，再依序印出
** * 透過函式 printGrade 傳入結構「指標」印出資訊
** * 指定變數 score 位元數 6（無法儲存 64 以上的數字）
--------------------------------------------------------------------
** * Structure (call by reference)
** * bits field
** * print / scan unsigned / short
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student {
    char name[20];
    unsigned int sid;
    unsigned short score : 6;   // 6 bits (0-63)
};

void printStruct(struct Student *stu)
{
    printf("sid=27%03u ; name=%s ; score=%hu\n", stu->sid, stu->name, stu->score); 
}

int main(int argc, char *argv[])
{
    if (argc < 2){
        printf("Usage: ./main student.txt \n");
        return 1;
    }
    FILE *fp;
    fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("File %s not exist. \n", argv[1]);
        return 2;
    }
    struct Student stu;
    unsigned int sid;
    unsigned short score;
    char name[20];
    while( (fscanf(fp, "%u %s %hu", &sid, name, &score)) != EOF )
    {
        strcpy(stu.name, name);
        stu.sid = sid;
        stu.score = score;
        printStruct(&stu);
    }
    fclose(fp);
    return 0;
}
