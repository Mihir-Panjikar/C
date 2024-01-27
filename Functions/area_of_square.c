#include<stdio.h>
int area();

int main()
{
	int len,sum;
	
	sum=area();
	
	printf("\nThe area of square is = %d",sum);
}

int area()
{
	int len;
	
	printf("Enter length of the square\n");
	scanf("%d",&len);
	
	return len*len;
	
}
