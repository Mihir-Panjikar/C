#include<stdio.h>

int main()
{
	float marks;
	
	printf("Enter marks\n");
	scanf("%f",&marks);
	if(marks<40)
	{
		printf("\nFailed\n\n");
	}
	else
	{
	    printf("\nPassed\n\n");	
	}
}