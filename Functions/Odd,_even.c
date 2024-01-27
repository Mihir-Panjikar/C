#include<stdio.h>
void check(int num);
int main()
{
	int num;
	
	printf("Enter the number to be verified as odd or even.\n");
	scanf("%d",&num);
	
	check(num);
}

void check(int num)
{
	
	if(num%2==0)
	{
		printf("\n%d is even a number.",num);
	}
	
	else
	{
		printf("\n%d is odd a number.",num);
	}
}
