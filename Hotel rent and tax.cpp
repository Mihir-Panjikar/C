#include<stdio.h>
int main()
{
	int rent,days;
	float Lux_tax,Ent_tax,Total_tax,Total_expen;
	//rent=room rent,Lux_tax=luxury tax,Ent_tax=entertainment tax,Total_expen=amount payable
	
	printf("Enter room rent and number of days staying\n");
	scanf("%d%d",&rent,&days);
	
	rent=rent*days;
	
	if(rent>1000)
	{
		Lux_tax=(rent/100)*5;
		Ent_tax=(rent/100)*12;
	}
	else if(rent<=1000)
	{
		Lux_tax=(rent/100)*2;
		Ent_tax=(rent/100)*7;		
	}
	Total_expen=rent+(Lux_tax+Ent_tax);
	Total_tax=Lux_tax+Ent_tax;
	
	printf("\nThe luxury tax and entertainment tax is rs %.2f.\n",Total_tax);
	printf("\nThe final amount payable is rs %.2f.\n\n",Total_expen);
}