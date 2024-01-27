#include<stdio.h>
int main()
{
	int i=3,m=1,sum=0;
	do
	{
	   sum=i*m;
	   m++;
	   printf("%d\n",sum);
	}
	while(sum<99);
	
}