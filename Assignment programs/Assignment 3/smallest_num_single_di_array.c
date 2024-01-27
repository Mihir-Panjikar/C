#include<stdio.h>
int main()
{
	int num[10],i,small;
	
	printf("Enter 10 numbers\n");
	
	for(i=0;i<=9;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<=9;i++)
	{
		printf("%d.",num[i]);
	}
	
	small=num[0];
	
	for(i=0;i<=9;i++)
	{
		if(small>num[i])
		small=num[i];
	}
	
	printf("\nsmallest number is %d",small);
}
