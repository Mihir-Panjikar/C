#include<stdio.h>

int main()

{
	float N1,N2,temp;
	
	printf("Enter values for N1\n");
	scanf("%f",&N1);
	
	printf("Enter values for N2\n");
	scanf("%f",&N2);
	
	printf("\nN1=%.2f,N2=%.2f \n",N1,N2);
	
	temp=N1;
	N1=N2;
	N2=temp;
	
	printf("\nafter swapping \n \nN1=%.2f,N2=%.2f\n\n",N1,N2);
	
}

