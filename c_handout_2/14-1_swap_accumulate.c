/* scanf 輸入兩整數 a b:
** STEP 1 : 撰寫一函式，若 a>b 則對調兩數 (return void)
** STEP 2 : 由 1 累加到 b
** ------------------------------------------------------------
** Enter two integer: 8 2
** 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 = 36
** ------------------------------------------------------------
** * call by reference
** * static
*/

#include<stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int accum(int b)
{
	static int st = 0;
	static int sum = 0;
	sum += ++st;
	printf("%d + ", st);
	if(st >= b){
		printf("\b\b= %d", sum);
		return 0;
	}
	return 1;
}

int main()
{
	//read value
	int a, b;
	printf("Enter two integer: ");
	scanf("%d %d", &a, &b);
	// swap
	if(a > b) swap(&a, &b);
	// accumulate
	while(accum(b));
	return 0;
}
