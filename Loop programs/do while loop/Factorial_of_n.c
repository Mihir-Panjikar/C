#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("Enter n\n");
	scanf("%d",&n);
	
	do
	{
		fact=fact*i;
		i=i+1;
	}
	while(i<=n);
	
	printf("factorial of %d: %d",n,fact);
}
