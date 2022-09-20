#include<stdio.h>
#include<string.h>
union Student {
    char name[13];          // size = 1
    unsigned int sid;       // size = 4
    unsigned short score;   // size = 2
};

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
    
    // Read File & Store as Union
    union Student stu;
    unsigned int sid;
    unsigned short score;
    char name[13];
    while( (fscanf(fp, "%u %s %hu", &sid, name, &score)) != EOF )
    {
        strcpy(stu.name, name);
        stu.sid = sid;
        stu.score = score;
        printf("sid=27%03u ; name=%s ; score=%hu\n", stu.sid, stu.name, stu.score);
    }
    printf("size of Student = %d\n", sizeof(stu));
    fclose(fp);
    return 0;
}
