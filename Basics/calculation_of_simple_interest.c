#include<stdio.h>

int main()

{
	float prin,rate,time;
	float si;
	
	printf("Enter principle,rate and time\n");
	scanf("%f%f%f",&prin,&rate,&time);
	
	si=(prin*rate*time)/100;
	
	printf("\nsimple interest:%.2f%%\n\n",si);
	
	
}