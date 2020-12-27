#include <stdio.h>

int main()
{
	printf("===Program Count 1 to 100===\n\n\n");
	
	int count ,line = 0;
	
	for(count = 1;count <= 100;count++)
	{
		printf("  %d  ", count);
		 
		line = line + 1;
		  
		if(line == 10)
		{
			printf("\n");
			line = 0;
		}
	}
	return 0;
}
