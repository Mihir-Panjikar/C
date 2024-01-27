#include<stdio.h>
int main()
{
	float fat,nat_pre,shelf_life;
	
	printf("Enter the percent of fat content.\n");
	scanf("%f",&fat);
	
	printf("Enter the percent of natural preservatives.\n");
	scanf("%f",&nat_pre);
	
	printf("Enter the months of shelf life.\n");
	scanf("%f",&shelf_life);
	
	if (fat<50 && nat_pre>30 && shelf_life>6)
	{
		printf("\n\nA grade");
	}
	
	else if (fat<50 && nat_pre>30 )
	{
		printf("\n\nB grade");
	}
	
	else if (nat_pre>30 && shelf_life>6)
	{
		printf("\n\nC grade");
	}
	
	else if (fat<50)
	{
		printf("\n\nD grade");
	}
}
