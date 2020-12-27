#include <stdio.h>

int main()
{
	printf("===Leap Year===\n\n");
	
	int year;
	
	printf("Input Year For Check Leap Year/Not Leap Year : ");
	scanf("%d",&year);
	
	if((year % 4) == 0) 
	{
		printf(" %d = Leap Year.",year);
	}
	else if((year % 400) == 0)
	{
		printf(" %d = Leap Year.",year);
	}
	else if((year % 100) == 0)
	{
		printf(" %d = Not Leap Year.",year);
	}
	else
	{
		printf(" %d Not Leap Year.",year);
	}
	
	return 0;
}

