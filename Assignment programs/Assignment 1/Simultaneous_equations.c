#include<stdio.h>

int main()

{

double a,b,c,p,q,r,x,y;

printf("Enter the coefficents of the first equation of the form ax+by=c\n");

scanf("%lf%lf%lf",&a,&b,&c);//The coefficents of the first equation

printf("Enter the coefficents of the second equation of the form px+qy=r\n");

scanf("%lf%lf%lf",&p,&q,&r);//The coefficents of the second equation

if(((a*q-p*b)!=0)&&((b*p-q*a)!=0))
{
	//In this case we have a unique solution and display x and y
	
	printf("The solution to the equations is unique\n");
	
	x=(c*q-r*b)/(a*q-p*b);
	
	y=(c*p-r*a)/(b*p-q*a);
	
	printf("The value of x=%lf\n",x);
	
	printf("The value of y=%lf\n",y);
}

else

if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)==0)&&((c*p-r*a)==0))//In such condition we can have infinitely many solutions to the equation.

{
//When we have such a condition than mathematically we can choose any one unknown as free and other unknown can be calculated using the free variables's value.

//So we choose x as free variable and then get y

printf("Infinitely many solutions are possible\n");

printf("The value of x can be varied and y can be calculated according to x's value using relation\n");

printf("y=%lf+(%lf)x",(c/b),(-1*a/b));

}

else

if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)!=0)&&((c*p-r*a)!=0))//In such condition no solutions are possible.

printf("No solutions are possible\n");


}
