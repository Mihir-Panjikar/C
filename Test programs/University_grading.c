#include<stdio.h>
int main()
{
	float sub_A,sub_B;
	printf("Enter the marks for the sujects A and B\n");
	scanf("%f%f",&sub_A,&sub_B);
	
	if(sub_A>=55 && sub_B>=45)
	{
        printf("\nThe student has passed\n\n");
	}
	else if(sub_A<55 || sub_A>=45 && sub_B>=55)
	{
		printf("\nThe student has passed\n\n");
	}
	else if(sub_A>=65 && sub_B<45)
	{
		printf("\nThe student will have to reappear in examination of subject B to qualify\n\n");
	}
	else
	{
		printf("\nThe student has failed\n\n");
	}
	
}