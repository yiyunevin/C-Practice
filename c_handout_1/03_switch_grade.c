/* 利用 switch 敘述句，將輸入的成績（分數）以下列方式分級：
** * 90 ～ 100：A 級
** * 80 ～ 89  ：B 級
** * 70 ～ 79  ：C 級
** * 60 ～ 69  ：D 級
** * 50 ～ 59  ：E 級
** ----------------------------------------------------------
** 1 * scanf
** 2 * group the grades
** *** test with online GDB
*/

#include <stdio.h>
int main()
{
    int score;
    printf("Enter score: ");
    scanf("%d", &score);

    switch(score/10)
    {
        case 10:
            printf("A class.");
            break;
        case 9:
            printf("A class.");
            break;
        case 8:
            printf("B class.");
            break;
        case 7:
            printf("C class.");
            break;
        case 6:
            printf("D class.");
            break;
        case 5:
            printf("E class.");
            break;
        default:
            printf("Out of range.");
    }
    return 0;
}
