#include<stdio.h>

int main()

{

	int N, X;

	scanf("%d %d",&N, &X);

	int A[N];

	for(int i=0;i<N;i++)

	{

		scanf("%d",&A[i]);

	}

	for(int i=0;i<N;i++)

	{

		if(X>A[i])

		{

			printf("%d ",A[i]);

		}

	}

	return 0;

}