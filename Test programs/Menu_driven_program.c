#include<stdio.h>
int main()
{
	int op,n,i=1,fact=1;
	printf("Press 1 for factorial of number and 2 to check for odd and even number\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		printf("\nEnter n\n");
		scanf("%d",&n);
		
		do
		{
			fact=fact*i;
			i=i+1;
		}
		while(i<=n);
		{
			printf("factorial of %d: %d\n",n,fact);
		}
		break;
		
		case 2:
		int n;
		printf("Enter n\n");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("\n%d is an even number\n",n);
		}
		
		else
		{
			printf("\n%d is an odd number\n",n);
		}
		break;
		
		default:
		printf("\nPlease choose correct option\n\n");
	}
}
