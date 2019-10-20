#include<stdio.h>
int main()
{
	int i, a[10];
	for(i=0;i<10;i++)
	scanf_s("%d",&a[i]);
	void sort(int a[],int n);
	sort(a,10);
}
void sort(int a[],int n)
{
	int i, k, j;
	for (i = 0; i < n; i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (a[i] > a[j])
			{
				k = a[i]; a[i] = a[j]; a[j] = k;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%5d", a[i]);
	}
		printf("\n");
}