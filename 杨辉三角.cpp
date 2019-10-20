#include<stdio.h>
int main()
{
	int i,x,j,m;
	int a[11] = { 1 }, b[10] = {0};
	for (i = 1; i < 10; i++)
	{
		if (i == 1)
			printf("%5d\n", a[0]);
		for (j = 1; j < 10; j++)
		{
			b[0] = a[0];
			b[j] = a[j] + a[j-1];
		}
		for (x = 0; x <= i; x++)
			printf("%5d", b[x]);
		printf("\n");
		for (m = 1; m < 10; m++)
		{
			a[m] = b[m];
		}
	}
	return 0;
}