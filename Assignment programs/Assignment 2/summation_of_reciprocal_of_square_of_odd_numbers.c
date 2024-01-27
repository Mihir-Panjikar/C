#include<stdio.h>
int main()
{
	int i=1,n,ori_squ,rev_squ,sum=0,rem;
	
	printf("Enter the number upto which you want the sum of reverse square\n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		ori_squ=i*i;
		rev_squ=0;
		
		do
		{
			rem = ori_squ%10;
			rev_squ = rev_squ*10 + rem;
			ori_squ /= 10;
		}
		while(ori_squ!=0);
		
		sum+=rev_squ;
		i+=2;
	}
	printf("The sum of reverse square upto %d is = %d",n,sum);
}
