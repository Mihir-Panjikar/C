#include<stdio.h>

int main()
{
	float cp,sp,pro,loss;//cp= cost price, sp= selling price, pro= profit
	printf("Enter cost price and selling price\n");
	scanf("%f%f",&cp,&sp);
	
	if(cp>sp)
	{
		
          loss= cp-sp;
          printf("\nRs %.2f is the loss\n\n",loss);
	
	}
	else
	{
	      
	      pro=sp-cp;
	      printf("\nRs %.2f is the profit\n\n",pro);
	}

}