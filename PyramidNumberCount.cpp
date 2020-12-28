#include <stdio.h>

int main()
{
	int i,j,n,line = 1;
	
	scanf("%d",&n);
	
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
}
