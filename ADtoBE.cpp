#include <stdio.h>

int ADtoBE()
{
	printf("\n\n===A.D. to B.E.===\n\n");
	
	int year;
	
	printf("Input A.D. : "); 
	scanf("%d",&year);
	
	year = year + 543;
	
	printf("\nB.E. : %d ",year);
	
	return 0;
}

int BEtoAD()
{
	printf("\n\n===B.E. to A.D.===\n\n");
	
	int year;
	
	printf("Input B.E. : "); 
	scanf("%d",&year);
	
	year = year - 543;
	
	printf("\nA.D. : %d ",year);
	
	return 0;
} 

int main()
{
	printf("===Program transform : A.D. to B.E. and B.E. to A.D.===\n\n");
	
	int num;
	
	printf("Please select !!!\n\n");
	printf("============================\n\n");
	printf("1 => A.D. to B.E.\n");
	printf("2 => B.E. to A.D.\n");
	
	printf("\n: ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1 : ADtoBE(); break ;
		case 2 : BEtoAD(); break ; 
		default : printf("\n\nError");	
	}
	
	printf("\n\nGood Bye !!!");
	return 0;
}
