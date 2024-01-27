#include<stdio.h>
int main()
{
	int num,i=0,t1=0,t2=1,t3;
	
	printf("Enter number of terms\n");
	scanf("%d",&num);
	
	while(i<num)
	{
		printf("%d",t1);
		
		t3=t1+t2;
		t1=t2;
		t2=t3;
		i++;
	}
}
