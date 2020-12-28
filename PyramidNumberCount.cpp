#include <stdio.h>

int main()
{
	printf("===PyramidNumberCount===\n\n");
	int i,j,n;
	
	while(1)
	{
		int line = 1;
		printf("Input Number : ");
		scanf("%d",&n);
	
	printf("\n");
	
		for(i = 1;i <= n;i++)
		{
			for(j = n;j >= i;j--)
			{
				printf(" ");
			}
		
			for(j = 1;j <= 2*i-1;j++)
			{
				printf("%d",line++);
			}
			printf("\n");
		}
	
		printf("\n=======================\n\n");
	}
	
	return 0;
}
