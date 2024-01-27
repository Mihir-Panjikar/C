#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf ("Enter N\n");
	scanf("%d",&n);
	
	while(i<=n/2)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i=i+1;
	}
	
	if(sum==n)
	printf("Perfect number");
	
	else
	printf("Not a perfect number");
}
