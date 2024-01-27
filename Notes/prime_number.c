#include<stdio.h>
int main()
{
	int n,i,count=0;
	
	printf("Enter n value:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	
	if(count==2)
	{
		printf("\nit is a prime number.");
	}
	else
	{
		printf("\nit is not a prime number.");
	}
}
