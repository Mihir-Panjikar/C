#include<stdio.h>
int main()
{
	float pri,quan,dis;//pri=price,quan=quantity,dis=discount
	printf("Enter price and quantity of items\n");
	scanf("%f%f",&pri,&quan);
	if(quan>1000)
	{
		pri=pri*quan;
		dis=(pri/100)*10;
		pri=pri-dis;
		printf("\nThe price is rs %.2f\n\n",pri);
	}
	else
	{
		pri=pri*quan;
		printf("The price is rs %.2f\n\n",pri);
	}
}