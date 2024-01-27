#include<stdio.h>
int main()
{
	float len,bre,hei,base,area;
	int select;
	
	printf("Enter 1 for area of triangle.\nEnter 2 for area of rectangle.\nEnter 3 for area of square.\n\n");
	scanf("%d",&select);
	
	switch(select)
	{
		case 1:
		printf("Enter base and height of the triangle.\n");
		scanf("%f%f",&base,&hei);
		
		area=(base*hei)/2;
		printf("Area of the traingle is %.2f",area);
		break;
		
		case 2:
		printf("Enter the length and breath of the recatngle.\n");
		scanf("%f%f",&len,&bre);
		
		area=len*bre;
		printf("Area of the rectangle is %.2f",area);
		break;
		
		case 3:
		printf("Enter the length of the square.\n");
		scanf("%f",&len);
		
		area=len*len;
		printf("Area of the square is %.2f",area);
		break;
		
		default:
		printf("Error! option not available.");
				
	}
}
