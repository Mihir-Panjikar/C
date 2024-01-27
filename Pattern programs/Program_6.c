#include<stdio.h>
int main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d\t",i);
			
		}
		printf("\n");
	}
}

/*
for(i=5;i>=1;i--)
for(j=5;j>=i;j--)
*/
