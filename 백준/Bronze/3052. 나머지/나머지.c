#include <stdio.h>


int main(void)
{
	int num, i, j, cnt = 0;
	int a[42] = { 0 };

	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		a[num % 42] = 1;
	}

	for (i = 0; i < 42; i++) {
		cnt += a[i];
	}

	printf("%d", cnt);


	return 0;
}