#include<stdio.h>

int main()
{
	float marks1,marks2,marks3,marks4,grade;
	printf("Enter marks of the subjects\n");
	scanf("%f%f%f%f",&marks1,&marks2,&marks3,&marks4);
	grade=(marks1+marks2+marks3+marks4)/4;
    
    if(grade<50)
    {
    	printf("\nFailed\n\n");
    }
	
	else
	{
		printf("\nPassed\n\n");
	}
}