#include<stdio.h>
int main()
{
int i;
for(i=0;i<20;i++)
{
i=i*2;
if(i==14)

continue;
printf("%d\n",i);
}
}
