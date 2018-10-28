#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];

	printf("Input a string to convert to lower case\n");
	gets(s);

	_strlwr_s(s, 100);

	printf("The string in lower case : %s\n", s);

	system("pause");
	return  0;
}