#include<stdio.h>
int main()
{
	int n,num,cube,sum=0,rem;
	
	printf("Enter the number to be verified whether it is armstrong number or not\n");
	scanf("%d",&n);
	num=n;
	
	do
	{
		rem = n%10;
		cube=rem*rem*rem;
		n/= 10;	
		sum=sum+cube;
	}
	while(n>0);
	
	if(num==sum)
	{
		printf("The number is a armstrong number");
	}
	
	else
	{
		printf("The number is not a armstrong number");
	}
	
}
