#include<stdio.h>
int main()
{
	float n1,n2,n3;
	
	printf("Enter the 3 numbers\n");
	scanf("%f%f%f",&n1,&n2,&n3);
	
	if(n1>n2 && n1>n3)
	{
		printf("\n%.2f is the largest number",n1);
	}
	
	if(n2>n1 && n1>n3)
	{
		printf("\n%.2f is the largest number",n2);
	}
	
	if(n3>n1 && n3>n2)
	{
		printf("\n%.2f is the largest number",n3);
	}
}
