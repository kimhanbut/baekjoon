#include <stdio.h>



int main(void)
{
	int n, i, a, b, sum , total;

	scanf("%d", &total);

	scanf("%d", &n);

	sum = 0;

	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		sum += (a*b);
	}

	if (sum == total) printf("Yes\n");
	else printf("No\n");

}