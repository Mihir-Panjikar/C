#include<stdio.h>

int main()
{
	int c,n,count=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	
	for(c=1;c<=n;c++)
	{
		if((n%c)==0)
		{
			count=count+1;
		}
		
	}
	if(count==2)
	printf("%d is a prime number",n);
	else
	printf("%d is not a prime number",n);
	
	return 0;
}
