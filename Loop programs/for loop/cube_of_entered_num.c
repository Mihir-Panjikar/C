#include<stdio.h>

int main()
{
	int i,n,sum;
	printf("Enter integer\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=i*i*i;
		printf("%d\n",sum);
	}
	
}