#include<stdio.h>

int main()
{
	int i=1,j;
	do
	{
		j=1;
		do
		{
			printf("%d\t",(i*j));
			j++;
		}
		while(j<=5);
		printf("\n");
		i++;
	}
	while(i<=10);
}
