#include<stdio.h>
#include<stdlib.h>

long lcm(int,int);

int main(void)
{
	int a, b, m;
	
	printf("Enter two integers and I will tell you the Least Common Multiple : ");
	scanf_s("%d%d", &a, &b);

	m = lcm(a,b);

	printf("The Least Common Multiple is %d\n",m);

	system("pause");
	return 0;
}

long lcm(int m,int n)
{
	int i;
	for (i = 1; i <= 10000000000; i++)
	{
		if (i%m == 0 && i%n == 0)
			break;
	}
	return i;
}