#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}

int main()
{
	int x = 10;
	int y = 20;
	int z = Add(x, y);
	printf("%d\n", z);
	return 0;
}