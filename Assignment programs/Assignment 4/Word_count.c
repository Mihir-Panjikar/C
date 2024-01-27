#include<stdio.h>
#include<string.h>
int main()
{
	char words[25];
	int n,i,wc=0;
	
	printf("Enter a sentence\n");
	gets(words);
	
	n=strlen(words);
	
	for(i=0;i<n;i++) 
	{
		if(words[i]==32)
		{
			wc++;
		}
	}
	wc++;
	printf("%d",wc);
	
}
