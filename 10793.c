#include<stdio.h>
int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if ((x >= y)&&(y>=z)||(x<=y)&&(y<=z))
	{
		printf("%d", y);
	}
	else if ((x>=z)&&(z >= y)||(x<=z)&&(z<=y))
	{
		printf("%d", z);
	}
	else
		printf("%d", x);
	return 0;
}