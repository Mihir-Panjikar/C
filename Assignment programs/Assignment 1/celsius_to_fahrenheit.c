#include<stdio.h>
int main()
{
	float cel,fah;
	
	printf("Enter degree celsius: ");
	scanf("%f",&cel);
	
	fah=(1.8)*(cel)+32;
	
	printf("Degree fahrenheit: %.2f",fah);
}
