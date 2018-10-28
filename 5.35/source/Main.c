#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n, i;
	long long  j=0, k=1, s;

	printf("Enter a integer : ");
	scanf_s("%d", &n);

	for(i = 1; i <= n; i++)
	{
		s = k + j;
		printf("%d  ",j);
		k = j;
		j = s;
	}

	system("pause");
}

