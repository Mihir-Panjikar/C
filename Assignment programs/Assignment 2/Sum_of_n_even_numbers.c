#include<stdio.h>
int main()
{
	int i=2,n,sum=0,count=1;
	
	printf("Enter number upto which you want to add\n");
	scanf("%d",&n);
	
	do
	{
		sum=sum+i;
		i+=2;
		count++;
	}
	while(count<=n);
	
	printf("\nThe sum of n number is = %d",sum);
}
