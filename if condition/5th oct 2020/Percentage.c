#include<stdio.h>

int main()
{
	float M1,M2,M3,M4,M5,per,outof,marks_obt;//marks obtained in subjects and total marks
	printf("Enter marks obtained in respective subjects and out of.\n");
	scanf("%f%f%f%f%f%f",&M1,&M2,&M3,&M4,&M5,&outof);

	marks_obt=M1+M2+M3+M4+M5;
	per=(marks_obt/outof)*100;
	printf("\nThe percentage of the student is %.2f%%\n",per);
	
	if(per>=60)
	{
		printf("\nThe student has passed with First Division.\n\n");
	}
	else if(per>=50&&per<=59)
	{
		printf("\nThe student has passed with Second Division.\n\n");
	}
	else if(per>=40&&per<=49)
	{
		printf("\nThe student has passed with Third Division.\n\n");
	}
	else if(per<40)
	{
		printf("\nThe student has Failed.\n\n");
	}
	
}