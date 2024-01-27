#include<stdio.h>

int main()

{
	float N1,N2;
	
	printf("Enter values for N1\n");
	scanf("%f",&N1);
	
	printf("Enter values for N2\n");
	scanf("%f",&N2);
	
	printf("\nN1=%.2f,N2=%.2f \n",N1,N2);
	
	N1=N1+N2;
	N2=N1-N2;
	N1=N1-N2;
	
	/*a=a*b;//a=200 (10*20)    
	  b=a/b;//b=10 (200/20)
	  a=a/b;//a=20 (200/10)*/

	printf("\nafter swapping \n \nN1=%.2f,N2=%.2f\n\n",N1,N2);
	
}

