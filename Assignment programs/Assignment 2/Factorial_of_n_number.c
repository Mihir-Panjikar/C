#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	
	printf("Enter number to find the factorial of\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
	printf("\n\nThe factorial of %d is = %d",n,fact);
}
