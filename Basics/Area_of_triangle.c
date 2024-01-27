#include<stdio.h>

int main()

{
	float base,height;
	float area;
	
	printf("enter base and height\n");
	
	scanf("%f%f",&base,&height);
	
	area= (base*height)/2;
	
	printf("\nArea of trianle is:%.2f\n\n\n\n",area);
	
}