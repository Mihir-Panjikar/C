#include<stdio.h>
int main()
{
	float bas_sal,HRA,DA,GROSS;//bas_sal=basic salary,HRA=House Rent Allowance,DA=Dearness Allowance
	printf("Enter basic salary\n");
	scanf("%f",&bas_sal);
	if(bas_sal<1500)
	{
		HRA=(bas_sal*10)/100;
		DA=(bas_sal*90)/100;
		printf("\nThe House Rent Allowance is rs %.2f\nDearness Allowance is rs %.2f\n\n",HRA,DA);
	}
	else if(bas_sal>=1500)
	{
		HRA=500;
		DA=(bas_sal*98)/100;
		
		printf("\nThe House Rent Allowance is rs %.2f\nDearness Allowance is rs %.2f\n\n",HRA,DA);
	}
	
	GROSS=bas_sal+HRA+DA;
	printf("\nThe Gross salary of the person is rs %.2f\n\n",GROSS);
}