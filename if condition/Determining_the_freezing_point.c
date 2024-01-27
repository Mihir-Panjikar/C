#include<stdio.h>

int main()
{
	float temp;//temp=temperature
	printf("Enter temperature\n");
	scanf("%f",&temp);
	if(temp<32)
	{
		printf("\nTemperature is below freezing point\n\n");
	}
	else
	{
		printf("\nTemperature is above freezing point\n\n");
	}
}