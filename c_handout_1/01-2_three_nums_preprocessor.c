#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b, c) (((a) > (b))? ((a) > (c))? (a) : (c) : ((b) > (c))? (b) : (c))
#define MIN(a, b, c) (((a) < (b))? ((a) < (c))? (a) : (c) : ((b) < (c))? (b) : (c))
#define SUM(a, b, c) ( (a) + (b) + (c) )
#define AVG(a, b, c) ( ((a) + (b) + (c)) / 3 )

int main(int argc, char *argv[])
{
    if(argc < 4){
        printf("Usage: \"main int1 int2 int3\"");
        return -1;
    }
    
    int a, b ,c;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    
    printf("Got number: %d, %d, %d.\n", a, b, c);
    printf("Max: %d\n", MAX(a, b, c));
    printf("Min: %d\n", MIN(a, b, c));
    printf("Sum: %d\n", SUM(a, b, c));
    printf("Average: %d\n", AVG(a, b, c));

    return 0;
}
