#include<stdio.h>

int main()
{
	float cy,yos,yoj;/*cy= current year
	                   yos= years of service
                       yoj= year of joinig*/
    printf("Enter current year, year of joining\n");
	scanf("%f%f",&cy,&yoj);
	yos= cy-yoj;
	
	if(yos>3)
	{
		printf("\nIs eligible for a bonus of 2500/-\n\n");
	}
	else
	{
		printf("\n");
	}  
}