#include<stdio.h>
int main()
{
	int luc_num[50],i,n;
	
	luc_num[0]=2;
	luc_num[1]=1;
	
	printf("Enter how many lucus numbers are to be printed\n");
	scanf("%d",&n);
	
	for(i=0;i<n-1;i++)
	{
		luc_num[i+2]=luc_num[i+1]+luc_num[i];
	}
	
	printf("\n%d lucus numbers are: ",n);
	
	for(i=0;i<n;i++)
	{
		printf("%d.",luc_num[i]);
	}
}
