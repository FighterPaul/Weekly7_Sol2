#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()						//Problem 109, Solution 2, ID Student 65010902
{
	unsigned int sum = 0, num;
	scanf("%d", &num);
	for (int i = 0; i <= num - 1; i++)
	{
		sum = sum + (num - 1) - i;
	}
	printf("%d", sum);
	return 0;
}