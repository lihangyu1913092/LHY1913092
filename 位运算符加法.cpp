#include<stdio.h>
int main()
{
	int a, b;
	int add(int a, int b);
	scanf_s("%d%d", &a, &b);
	printf("%d\n", add(a, b));
	return 0;
}
int add(int a, int b)
{

	int sum, carry, i;
	sum = a ^ b;
	carry = (a & b) << 1;
	for (; carry!= 0;)
	{
		i = sum;
		sum = sum ^ carry;
		carry = (i & carry) << 1;
	}
	return sum;
}