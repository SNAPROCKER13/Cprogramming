#include <stdio.h>

int InchtoCm()
{
	float inch;
	
	printf("\n\nInput inch Value : ");
	scanf("%f",&inch);
	
	printf("\n%f inch = %f cm",inch,inch * 2.54);
	
	return 0;
}

int CmtoInch()
{
	float cm;
	
	printf("\n\nInput cm Value : ");
	scanf("%f",&cm);
	
	printf("\n%f cm = %f inch",cm,cm * 0.3937);
	
	return 0;
}

int main()
{
	printf("===Program convert InchtoCm/CmtoInch===\n\n");
	
	int program;
	printf("1 : Program inch => cm\n");
	printf("2 : Program cm => inch\n");
	printf("\n\nPlease Select to Program : ");
	scanf("%d",&program);
	
	if(program == 1)
	{
		InchtoCm();
	}
	else if(program == 2)
	{
		CmtoInch();
	}
	else
	{
		printf("Good Bye !!!");
	}
	
	
	
	return 0;
}
