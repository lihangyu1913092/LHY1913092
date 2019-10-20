#include<stdio.h>
int main()
{
	int a, b, c;
	int primenumber(int a);
	scanf_s("%d", &a);
	for (c = 2, b = a - c; c <= b; c++, b = a - c)
	{
		if (primenumber(b) && primenumber(c))
		{
			printf("%d = %d + %d\n", a, b, c);
			goto finish;
		}

	}
finish:
	return 0;
}
int primenumber(int a)
{
	int x, flag = 1;
	for (x = 2; x < a; x++)
		if (a % x == 0)
		{
			flag = 0;
			break;
		}
	return (flag);
}