#include<math.h>
#include<stdio.h>
int main()
{
	int max(int x, int y);
	int min(int x, int y);
	int a, b, i;
	scanf_s("%d%d", &a, &b);
	int c = max(a, b), d = min(a, b);
	if (c % d == 0)
		printf("最大公因数为%d\n", d);
	else if (c % d!=0)
		for (i = 1;c%d!=0; i++)
	{
			c = abs(c - d);
			if (max(c, d) % min(c, d) == 0)
			{
				printf("最大公因数为%d\n", min(c, d));
				break;
			}
			else if (max(c, d) % min(c, d) != 0)
			{
				d = abs(c - d);
				if (max(c, d) % min(c, d) == 0)
				{
					printf("最大公因数为%d", min(c, d)); break;
				}
			}
	}
	return 0;

}
int max(int x, int y)
{
	return (x > y ? x : y);
}
int min(int x, int y)
{
	return (x < y ? x : y);
}