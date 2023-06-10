#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main()
{
	int a, b;

	scanf("%d%d", &a, &b);
	printf("a의 값: %d\n", sum(a, b));
	return 0;
}
