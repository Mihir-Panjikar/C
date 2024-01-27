#include<stdio.h>
#include<string.h>
int main()
{
	int i,n=0;
	char ch[20];
	
	printf("Enter a word or a sentence\n");
	gets(ch);
	
	n=strlen(ch);
	
	for(i=0;i<n;i++)
	{
		if(ch[i]>=65 && ch[i]<=90)
		{
			ch[i]=ch[i]+32;
		}
		else if(ch[i]>=97 && ch[i]<=122)
		{
			ch[i]=ch[i]-32;
		}
	}
	printf("%s",ch);
	
}
