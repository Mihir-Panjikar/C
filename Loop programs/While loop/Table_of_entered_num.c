#include<stdio.h>
int main()
{
	int i=1,n,sum=0;
	printf("Enter number\n");
	scanf("%d",&n);
	printf("\n");
	
	while(sum<=(9*n))
	{
		sum=i*n;
		i++;
		printf("%d\n",sum);
		
	}
	
}