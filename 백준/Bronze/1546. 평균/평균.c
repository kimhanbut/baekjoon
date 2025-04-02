#include <stdio.h>


int main(void)
{
	int n, m, i, j, score;
	double max ,sum = 0;
	double a[1000] = { 0 };

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &score);
		a[i] = score;
	}

	max = a[0];
	
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	for (i = 0; i < n; i++) {
		a[i] = (a[i] / max) * 100;
		sum += a[i];
	}

	sum /= n;

	printf("%lf\n", sum);

	return 0;
}