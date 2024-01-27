#include<stdio.h>

int main()

{
	float value1,value2;
	printf("Enter two values\n");
	scanf("%f%f",&value1,&value2);
	if(value1<value2)
	{
		printf("\n%.2f is the largest value\n\n",value2);
	}
	else
	{
	    printf("\n%.2f is the largest value\n\n",value1);	
	}
}
