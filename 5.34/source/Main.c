#include<stdio.h>
#include<stdlib.h>

long power(int, int);

int main()
{
	int a, b, c;

	printf("Enter two integers : ");
	scanf_s("%d%d", &a, &b);

	c = power(a, b);

	printf("The answer is %d\n", c);

	system("pause");
}

long power(int d, int f)
{
	int i, s=1;

	for (i = 1; i <= f; i++)
	{
		s = s * d;
	}
	return s;
}