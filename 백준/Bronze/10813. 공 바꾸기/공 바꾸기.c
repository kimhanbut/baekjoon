#include <stdio.h>


int main(void)
{
	int n, m, i, j, tmp,num;
	int b;
	int a[100] = { 0 };

	scanf("%d %d", &n, &m);

	for (i = 1; i <= n; i++) {
		a[i - 1] = i;
	}


	for (num = 0; num < m; num++) {
		scanf("%d %d", &i, &j);
		tmp = a[i - 1];
		a[i - 1] = a[j - 1];
		a[j - 1] = tmp;
	}

	for (i = 1; i <= n; i++) {
		printf("%d ", a[i - 1]);
	}

}
