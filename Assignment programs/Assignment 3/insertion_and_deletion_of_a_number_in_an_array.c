#include<stdio.h>
int main()
{
	int arr[50],key,loc,n,i,op;
	
	printf("Enter size of the array:");
	scanf("%d",&n);
	
	printf("Enter %d elements\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter 1 insert an element in the array\nEnter 2 to delete an element in the array\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		printf("Enter element to insert:");
		scanf("%d",&key);
		
		printf("Enter location to insert the element:");
		scanf("%d",&loc);
		
		for(i=n-1;i>=loc-1;i--)
		{
			arr[i+1]=arr[i];
		}
		
		arr[loc-1]=key;
		printf("Resultant array:");
		
		for(i=0;i<=n;i++)
		{
			printf("%d.",arr[i]);
		}
		break;
		
		case 2:
		printf("Enter location of the elemnt to be deleted:");
		scanf("%d",&loc);
		
		for(i=loc-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
	    }
		
		if(loc>=n+1)
		printf("Deletion not possible\n");
		
		else
		{
			
		    printf("Resultant array:");
		
		    for(i=0;i<n-1;i++)
		    {
			    printf("%d.",arr[i]);
		    }
		}
		break;		
	}
}
