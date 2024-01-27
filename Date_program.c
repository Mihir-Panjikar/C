#include<stdio.h>

void main()
{
	int day,month,year;
	
	printf("Enter Today's date \n");
	scanf("%d%d%d",&day,&month,&year);
	
	if(day<32 && month<13)
	{
		if(((month==4 || month==6 || month==9 || month==11) && (day<=30)) || ((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && (day<=31)) || (year%4==0 && month==2 && day<=29) || (month==2 && day<=28 && year%4!=0) || (day<=31 && month==12))
		{
			if(year%4==0 && month==2)
			{
				if(day==29)
				{
					day=1;
					month++;
				}
				else
				{
					day++;
				}
				
			}
			
			else if(month==2 && year%4!=0)
			{
				if(day==28)
				{
					day=1;
					month++;
				}
				else
				{
					day++;
				}
				
			}
			
			else if(day==31 && month==12)
			{
				day=1;
				month=1;
				year++;
			}
			
			else if(((month==4 || month==6 || month==9 || month==11) && (day==30)) || ((month==1 || month==3 || month==5 || month==7 || month==8 || month==10) && (day==31)))
			{
				day=1;
				month++;
			}
			
			else
			{
				day++;
			}
			
			printf("\n\nTomorrow's date will be %d/%d/%d\n",day,month,year);
		}
		
		else
		{
			printf("\n\nIncorrect date entered\n");
		}
	
	}
	
	else
	{
		printf("\n\nIncorrect date entered\n");
	}
	
}
