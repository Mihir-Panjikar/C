#include<stdio.h>
int main()
{
	int a[10][10],sum_row,sum_col,r1,c1,i,j,k;
    
	printf("enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&r1, &c1);
      
    printf("enter the matrix elements\n");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    k=1;
    for(i=0;i<r1;i++)
    {
        
		sum_row=0;
		for(j=0;j<c1;j++)
        {
            sum_row+=a[i][j];
        }
        printf("sum of row %d = %d\n",k++,sum_row);
    }
    
    k=1;
    for(i=0;i<c1;i++)
    {
        
		sum_col=0;
		for(j=0;j<r1;j++)
        {
            sum_col+=a[j][i];
        }
        printf("sum of column %d = %d\n",k++,sum_col);
    }
 
}
