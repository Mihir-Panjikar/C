#include<stdio.h>
int main()
{
	int i=1,n=5,sum=0;
	
	do
	{
		sum=i*n;
		i++;
		printf("%d\n",sum);	
	}
	while(sum<=(9*n));
}