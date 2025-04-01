#include <stdio.h>

int main(void)
{
	int i;
	scanf("%d", &i);
	if (((i % 4 == 0) && (i % 100 != 0)) || i % 400 == 0) {
		printf("1\n");
	}
	else printf("0\n");
}
