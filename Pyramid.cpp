#include <stdio.h>

int main()
{
	printf("===Create Pyramid===\n\n");
	
	int i,j,num;
	while(1)
	{
		printf("Input number for hight (0 for Exit) : ");
		scanf("%d",&num);
	
		printf("\n\n");
	
		for(i = 1; i <= num;i++)
		{
			for(j = num-1;j >= i ;j--)
			{
				printf(" ");
			}
			for(j = 1;j <= 2*i-1 ;j++)
			{
				printf("*");
			}
		
			printf("\n");
		}
		
		printf("\n\n");
		
		if(num == 0)
		{
			return 0;
		}
	}
	
	
	return 0;
}
