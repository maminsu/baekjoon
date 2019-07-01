#include<stdio.h>
int main()
{
	int h, m;
	scanf("%d %d", &h, &m);
	if (m < 45)
	{
		printf("%d %d\n", (h+23)%24, (m + 60) - 45);
	}
	else if (m >= 45)
	{
		printf("%d %d\n", h%24, m - 45);
	}
	return 0;
}