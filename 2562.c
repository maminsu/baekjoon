#include <stdio.h>

int max, max_index = 0;
int main()
{
	int list[9] = { 0, };
for (int i = 0; i < 9; i++)
	{
		scanf("%d", &list[i]);
		int temp = list[i];
		int temp_index = i; 
        if (temp > max)
		{
			max = temp;
			max_index = temp_index;
        }
	}
    printf("%d\n%d", max, max_index + 1);
}