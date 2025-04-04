#include<stdio.h>
#define CRT_SECURE_NO_WARNINGS

int main(void)
{
    int t = 0;
    int r = 0;
    char s[21] = { NULL };
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &r);
        scanf("%s", &s, sizeof(s));
        int j = 0;
        while (s[j] != NULL)
        {
            for (int k = 0; k < r; k++)
            {
                printf("%c", s[j]);
            }
            j++;
        }
        printf("\n");
    }

    return 0;
}