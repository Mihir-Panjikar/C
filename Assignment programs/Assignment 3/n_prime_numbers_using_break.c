#include<stdio.h>
int main()
{
	int num,i,pri=2;
	
	printf("Enter n value:");
	scanf("%d",&num);
	
	while(num)
	{
		for(i=2;i<pri;i++)
		{
			if(pri%i==0)
			{
				break;
			}
		}
		if(i==pri)
		{
			printf("\n%d\n",pri);
			num--;
		}
		pri++;
	}
	
}
