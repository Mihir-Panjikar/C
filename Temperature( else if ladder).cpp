#include<stdio.h>
int main()
{
	float temp;//temp=temperature
	printf("Enter Temperature.\n");
	scanf("%f",&temp);
	
	if(temp<=0)
	{
		printf("\nIt's very very cold.\n\n");
	}
	else if(temp>0&&temp<=10)
	{
		printf("\nIt's cold.\n\n");
	}
	else if(temp>10&&temp<=20)
	{
		printf("\nIt's cool out.\n\n");
	}
	else if(temp>20&&temp<=30)
	{
		printf("\nIt's warm.\n\n");
	}
	else if(temp>30)
	{
		printf("\nIt's hot.\n\n");
	}
}