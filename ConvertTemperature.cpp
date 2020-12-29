#include <stdio.h>

float Temp(float F)
{
    return (F-(float)32)*((float)100/(float)180);
}

int main()
{
	printf("===Program Convert Temperature(Fah)toTemperature(Cel)===\n\n");
	
	float Fah;
	
	printf("Input Value Temperature(Fah) : ");
	scanf("%f",&Fah);
	
	printf("\n\nTemperature(Cel) = %.2f ",Temp(Fah));

	return 0;
}
