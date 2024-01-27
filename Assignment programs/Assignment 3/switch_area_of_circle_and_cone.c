#include<stdio.h>
#include<math.h>
int main()
{
	int op;
	float area,hei,rad,root;
	
	printf("Enter 1 to calculate area of circle and 2 to calculate area of cone.\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
		printf("Enter the radius of the circle.\n");
		scanf("%f",&rad);
		
		area=3.14*rad*rad;
		printf("\nArea of circle=%.2f",area);
		break;
	
		case 2:
		printf("Enter the height and radius of the cone.\n");
		scanf("%f%f",&hei,&rad);
		
		root=sqrt((hei*hei)+(rad*rad));
		area=3.14*rad*(rad+root);
		
		printf("\nArea of cone=%.2f",area);
		
		break;
	}
	
}
