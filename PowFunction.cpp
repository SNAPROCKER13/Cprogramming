#include <stdio.h>

float power(float b,float p)
{
	int i;
	float start = 1 ;
	
	if(p == 0)
	{
		return 1;
	}
	else
	{
		for(i = p;i >= 1;i--) // 2
		{ 	
			start = start * b;   // c = 1*2 ,c = 2*2
		}
		return start;
	}
}

int main()
{
	printf("===Power===\n\n");
	
	float base , pow;
	
	printf("Input base : ");
	scanf("%f",&base);
	
	printf("Input pow : ");
	scanf("%f",&pow);
	
	printf("%.2f ^ %.2f = %.2f",base ,pow ,power(base,pow));
	
	return 0;
}
