#include<stdio.h>
int main()
{
	int n,sum=0,c=1;
	printf("Enter N\n");
	scanf("%d",&n);
	
	do
	{
		sum=(c*c)+sum;
		c=c+1;
	}
	while(c<=n);
	
	printf("sum=%d\n",sum);
}
