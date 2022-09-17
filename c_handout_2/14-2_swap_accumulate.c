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
