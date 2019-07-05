#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		
		if ((a == 0) && (b == 0))
		{
			return 0;
		}
		printf("%d\n", a + b);
	}
	return 0;
}
[출처] 백준 10952번: A+B - 5|작성자 DY1234