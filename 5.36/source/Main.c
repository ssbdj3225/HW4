#include<stdio.h>
#include<stdlib.h>

void hanoiAlgorithm(int, int, int, int);

int main(void)
{
	int diskNumber , peg1 = 1, peg2 = 2, peg3 = 3;
	printf("Enter a number of n disks to see the instructions\n");
	printf("for moving each disk in the Tower of Hanoi problem.\n");
	scanf_s("%d", &diskNumber);
	hanoiAlgorithm(diskNumber, peg1, peg3, peg2);

	system("pause");
}
void hanoiAlgorithm(int disk, int start, int final, int temp)
{
	if (disk == 1)
		printf("For disk %d       %d --> %d\n", disk, start, final);
	else
	{
		hanoiAlgorithm(disk - 1, start, temp, final);
		printf("For disk %d       %d --> %d\n", disk, start, final);
		hanoiAlgorithm(disk - 1, temp, final, start);
	}
}