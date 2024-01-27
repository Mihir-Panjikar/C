#include<stdio.h>
#include<conio.h>

int main()
{
	char wea;//wea:weather
	printf("Is it raining?(y/n)\n\n");
	printf("Please enter 'y' for yes and 'n' for no.\n\n");
	scanf("%c",&wea);
	if(wea=='y')
	{
		printf("\nYou will have to carry an umbrella.\n\n");
	}
	else if(wea=='n')
	{
		printf("\nIt's a sunny day.\n\n");
	}
	else
	{
		printf("\nPlease enter correct input.\n\n");
	}
}