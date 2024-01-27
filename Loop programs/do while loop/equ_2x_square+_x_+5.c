#include<stdio.h>
int main()
{
	int x=5,sol;
	do
	{
		sol=2*(x*x)+x+5;
		printf("solution is:%d\n",sol);
		x=x+1;
	}
	while(x<=10);
}
