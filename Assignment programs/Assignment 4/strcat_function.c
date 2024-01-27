#include<stdio.h>
#include<string.h>

int main()
{
	char arr2[20];
	
	char arr1[20]="Hello ";
	printf("Enter your name\n");
	scanf("%s",&arr2);
	
	strcat(arr1,arr2);
	
	printf("%s",arr1);
}
