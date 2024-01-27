#include<stdio.h>
int main()
{
	int num[10];
	int even=0,odd=0,i;
	
	printf("Enter 10 numbers.\n");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
		
		if(i%2==0)
		{
			even=even+1;
		}
		
		else
		{
			odd=odd+1;
		}
	}
	
	printf("\n\nEven numbers are %d and Odd number are %d.",even,odd);
	
}
