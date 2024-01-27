#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,k;
	char ch[10];
	
	printf("Enter a word\n");
	gets(ch);
	
	n=strlen(ch);
	i=0;
	k=n-1;
	
	while (k > i) 
    { 
        if (ch[i++] != ch[k--]) 
        { 
            printf("%s is Not a Palindrome", ch);
            return 0;
        } 
    } 
    printf("%s is a palindrome", ch); 
}
