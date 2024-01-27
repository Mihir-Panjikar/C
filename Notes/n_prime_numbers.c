#include<stdio.h>
int main()
{
	int n,i,count,k;
	
	printf("Enter n value:");
	scanf("%d",&n);
	
	for(k=1;k<=n;k++)
	{
		count=0;
		for(i=1;i<=k;i++)
		{
			if(k%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("\n%d",k);
		}
	}

}
