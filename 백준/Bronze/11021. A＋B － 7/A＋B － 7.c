#include <stdio.h>



int main(void)
{
	int n, i, a, b;

	scanf("%d", &n);

	

	for (i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}


}