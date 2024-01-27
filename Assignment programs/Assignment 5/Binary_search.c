#include<stdio.h>
int main()
{
	int low,high,mid,key,temp,i,j,n,found=0,min;
	
	printf("Enter how many numbers you want to insert in the array\n");
	scanf("%d",&n);
	
	int arr[n];
	low=0;
	high=n-1;
	mid=(high+low)/2;
	
	printf("Enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nEntered array:");
	for(i=0;i<n;i++)
	{
		printf("%d.",arr[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	
	printf("\n\nsorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d.",arr[i]);
	}
	
	printf("\n\nEnter element you want to find:");
	scanf("%d",&key);
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key<arr[mid])
		{
			high=mid-1;
		}
		else if(key>arr[mid])
		{
			low=mid+1;
		}
		else if(key==arr[mid])
		{
			printf("\nFound at location %d\n",mid+1);
			found=1;
			break;
		}
	    
	}
	if(found!=1)
	printf("\nElement not found");
	printf("\n\n");
}

