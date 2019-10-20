#include<stdio.h>
int main()
{
	int m;
	scanf_s("%d", &m);
	char a, b, c;
	a = 'a';
	b = 'b';
	c = 'c';
	void hanotower(char a,char b,char c,int n);
	hanotower(a, b, c, m);
	return 0;
}
void hanotower(char a, char b, char c, int n)
{
	void move(char x, char y);
	if (n == 1) move(a, c);
	else
	{
		hanotower(a, c, b, n - 1);
		move(a, c);
		hanotower(b, a, c, n - 1);
	}
}
void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}