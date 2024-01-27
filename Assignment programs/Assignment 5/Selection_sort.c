#include<stdio.h>
int main()
{
	int num[10],i,j,temp,min;
	
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	
	printf("\nEntered numbers:");
	for(i=0;i<10;i++)
	{
		printf("%d.",num[i]);
	}
	printf("\n\n");
	
	for(i=0;i<9;i++)
	{
		min=i;
		for(j=i+1;j<10;j++)
		{
			if(num[j]<num[min])
			{
				min=j;
			}
		}
		temp=num[i];
		num[i]=num[min];
		num[min]=temp;
	}
	
	printf("Sorted array:");
	for(i=0;i<10;i++)
	{
		printf("%d.",num[i]);
	}
}
