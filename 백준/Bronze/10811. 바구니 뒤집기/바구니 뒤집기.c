#include <stdio.h>


int main(void)
{
	int n, m, i, j;
	int a[100] = { 0 };
	int k, l, tmp;

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++) {
		a[i] = i + 1;
	}

	for (k = 0; k < m; k++) {
		scanf("%d %d", &i, &j);
		i--;
		j--;
		for (l = 0; l <= ((j - i) / 2); l++) {
			tmp = a[i + l];
			a[i + l] = a[j - l];
			a[j - l] = tmp;

		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}