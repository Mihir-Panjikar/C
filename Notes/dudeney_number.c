#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,cube_num,num_sum=0,rem;
	
	printf("Enter the number to be checked as a dudeney number\n");
	scanf("%d",&num);
	
	temp=num;
	cube_num=cbrt(num);
	
	do
    {
        rem = temp%10;
        num_sum += rem;
        temp /= 10;
    }
    while(temp != 0);
    
    
	if(cube_num==num_sum)
	{
		printf("\nit is a dedeney number");
	}
	else
	{
		printf("\nit is not a dedeney number");
	}

}
