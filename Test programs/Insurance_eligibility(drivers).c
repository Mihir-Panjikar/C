#include<stdio.h>
int main()
{
	int age;
	char mar_stat, gen;//mar_stat= marital status,gen=gender

	printf("Enter marital status of the driver\n");
	printf("Enter 'y' for yes and 'n' for no\n\n");
	scanf("%c", &mar_stat);

	/*

	printf("\nEnter the age of the driver\n\n");
	scanf("%d", &age);

	printf("\nEnter gender of the driver\n");
	printf("Enter 'm' for male and 'f' for female\n\n");
	scanf("%c", &gen);

	*/

	if (mar_stat == 'y')
	{
		printf("\nThe driver is eligible for insurance\n\n");
	}
	/*
	else if (mar_stat == 'n')
	{
		if (gen == 'm' && age > 30)
		{
			printf("The driver is eligible for insurance\n\n");
		}

		else if (gen == 'f' && age > 25)
		{
			printf("The driver is eligible for insurance\n\n");
		}
	}
	*/

	else
	{
		printf("The driver is not eligible for insurance\n\n");
	}

}