#include<stdio.h>
int main()
{
	int a,i,c=1;
	while (scanf_s("%d", &a) == 1) {
		for (i = 2; i*i<= a; i++)
		{
			if (a%i==0)
			{
				c = 0;
				break;
			}
		}
		if (c)
			printf("yes.\n");
		else
			printf("not.\n");
	}
	return 0;
}