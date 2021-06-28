#include<stdio.h>

int main()

{
	float Basic;
	float da,ta,Gross;
	
	printf("Enter Basic\n");
	scanf("%f",&Basic);
	
	
	da=(10*Basic)/100;
	
	
	ta=(12*Basic)/100;
	
	
	Gross = Basic+da+ta;
	
	printf("\nGross salary of a person:%.1f K\n\n",Gross);

}