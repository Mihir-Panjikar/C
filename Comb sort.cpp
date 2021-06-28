#include<stdio.h>
void comb_sort(int n,int arr[30]);
int main()
{
	int arr[30],n,i;
	
	printf("Enter no. of elemets you want to enter:");
	scanf("%d",&n);
	
	
	printf("\nEnter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nArray before sorting:");
	
	for(i=0;i<n;i++)
	{
		printf("%d.",arr[i]);
	}
	
	comb_sort(n,arr);
	
}

void comb_sort(int n,int arr[30])
{
	int gap,swap,i,temp;
	
	gap=n;
	swap=1;

	while(gap!=1 || swap == 0)
	{
		gap=gap/1.3;
		swap=0;
		
		for(i=0;i<n-gap;i++)
		{
			if(arr[i]>arr[i+gap])
			{
				temp=arr[i];
				arr[i]=arr[i+gap];
				arr[i+gap]=temp;
				
				swap=1;
			}
		}
	}
	
	printf("\n\nArray after sorting:");
	
	for(i=0;i<n;i++)
	{
		printf("%d.",arr[i]);
	}
}
