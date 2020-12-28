#include <stdio.h>

int fac(int val) // if val = 3
{
	if(val == 0)
	{
		int x = 1;
		
		return x;
	}
	else
	{
		int i,x = 1;
		                 
		for( i = 1;i <= val;i++) // 3 loop
		 
		{
			x = x * i; // x = 1 * (1) , x = 1 * (2) , x = 2 * (3)
		}
		
		return x;
	}
}


int main()
{
	printf("===Program Factorial===\n\n");
	int num;
	
	printf("Input Value : ");
	scanf("%d",&num);
	
	printf("\n\n %d! = %d",num, fac(num));
	
	return 0;
}
