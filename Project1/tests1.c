#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Phi(int num)
{
	int n1 = 0, n2 = 1, temp;

	if (num == 0)
		return 0;
	else if (num == 1) {
		printf("%d", n1);
		return 0;
	}
	else if (num >= 2)
		printf("%d %d ", n1, n2);

	for (int i = 0; i < num - 2; i++)
	{
		printf("%d ", n1 + n2);
		temp = n1;
		n1 = n2;
		n2 = temp + n2;
	}
	return 0;
}

int main(void)
{
	int n;
	
	printf("피보나치 수열의 갯수: ");
	scanf("%d", &n);
	Phi(n);

	
	return 0;
}