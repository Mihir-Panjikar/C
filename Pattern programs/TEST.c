#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		if(i%2==0)
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			printf("*");
		    else
	        printf("$");
		}
		else
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			printf("$");
		    else
	        printf("*");
		}
		printf("\n");	
	}
}