#include <stdio.h>

int fac(int val)
{
	if(val == 0 || val == 1)
	{
		int x = 1;
		
		return x;
	}
	else
	{
		return (val * fac(val - 1));
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
