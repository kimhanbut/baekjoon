#include <stdio.h>


int main(void)
{
	char str[1000] = { 0 };
	int i, check=0;

	scanf("%s", str);
	for (i = 0; i < 100; i++) {
		if (str[i] == 0) {
			printf("%d\n", i);
			check = 1;
			break;
		}
	}
	if (check == 0)printf("%d", 100);

	return 0;
}