#include <stdio.h>

int main(void)
{
	char s[1001];
	int i, num, j;
	char first, last;

	scanf("%d", &num);

	for (i = 0; i < num; i++) {
		
		scanf("%s", &s);
		first = s[0];
		for (j = 0; j < 1000; j++) {
			if (s[j] == 0) {
				last = s[j - 1];
				break;
			}
		}
		printf("%c%c\n", first, last);

		for (j = 0; j < 1000; j++) {
			if (s[j] == 0)
				break;
			else s[j] = 0;
		}

	}
	
	return 0;
}