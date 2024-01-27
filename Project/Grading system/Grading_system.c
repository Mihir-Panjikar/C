#include<stdio.h>
int print_marks(int n);
int print_name(int n);
int main()
{
	int roll,eng[21],hin[21],chem[21],phy[21],cs[21],maths[21],ict[21];
	char name[800],name2[30],name3[30],name4[30],name5[30],name6[30],name7[30],name8[30],name9[30],name10[30];
	char name11[30],name12[30],name13[30],name14[30],name15[30],name16[30],name17[30],name18[30],name19[30],name20[30],name21[30];
	
	name[1000]={"Akhilesh Nigalye","Atharv Pednekar","Bhargav Desai","Deepali Mahankod","Divij Mandrekar","Joel Furtado","Joywin Colaco","Mihir Panjikar","Naveen Hanagandi","Parth Nayak","Presly Fds","Pritesh Shivalingkar","Rounak Naik","Sakshi Kamble","Sreyash Naik","Tanay Naik","Tasaur Jamader","Viresh Sawant","Yash Palan","sheryl Rodrigues","Giles Borges'};
	
	
	printf("%s",name[0]);
	
	
	/*
	eng[0]=17;
	hin[0]=18;
	chem[0]=18;
	phy[0]=17;
	cs[0]=19;
	maths[0]=20;
	ict[0]=18;
	
	eng[1]=17;
	hin[1]=19;
	chem[1]=20;
	phy[1]=128;
	cs[1]=20;
	maths[1]=20;
	ict[1]=18;
	
	eng[2]=18;
	hin[2]=19;
	chem[2]=20;
	phy[2]=19;
	cs[2]=19;
	maths[2]=20;
	ict[2]=18;
	
	eng[3]=19;
	hin[3]=18;
	chem[3]=18;
	phy[3]=19;
	cs[3]=20;
	maths[3]=20;
	ict[3]=20;
	
	eng[4]=19;
	hin[4]=17;
	chem[4]=16;
	phy[4]=18;
	cs[4]=19;
	maths[4]=20;
	ict[4]=18;
	
	eng[5]=17;
	hin[5]=18;
	chem[5]=18;
	phy[5]=17;
	cs[5]=19;
	maths[5]=20;
	ict[5]=18;
	
	eng[6]=17;
	hin[6]=18;
	chem[6]=18;
	phy[6]=17;
	cs[6]=19;
	maths[6]=20;
	ict[6]=18;
	
	eng[7]=5;
	hin[7]=4;
	chem[7]=3;
	phy[7]=0;
	cs[7]=1;
	maths[7]=2;
	ict[7]=6;
	
	eng[8]=18;
	hin[8]=18;
	chem[8]=18;
	phy[8]=17;
	cs[8]=19;
	maths[8]=20;
	ict[8]=18;
	
	eng[9]=17;
	hin[9]=18;
	chem[9]=18;
	phy[9]=17;
	cs[9]=19;
	maths[9]=20;
	ict[9]=18;
	
	eng[10]=17;
	hin[10]=18;
	chem[10]=18;
	phy[10]=17;
	cs[10]=20;
	maths[10]=20;
	ict[10]=18;
	
	eng[11]=17;
	hin[11]=18;
	chem[11]=18;
	phy[11]=17;
	cs[11]=19;
	maths[11]=20;
	ict[11]=18;
	
	eng[12]=17;
	hin[12]=18;
	chem[12]=18;
	phy[12]=20;
	cs[12]=19;
	maths[12]=20;
	ict[12]=18;
	
	eng[13]=19;
	hin[13]=18;
	chem[13]=18;
	phy[13]=18;
	cs[13]=19;
	maths[13]=20;
	ict[13]=18;
	
	eng[14]=17;
	hin[14]=18;
	chem[14]=18;
	phy[14]=17;
	cs[14]=19;
	maths[14]=20;
	ict[14]=18;
	
	eng[15]=17;
	hin[15]=18;
	chem[15]=18;
	phy[15]=17;
	cs[15]=19;
	maths[15]=20;
	ict[15]=18;
	
	eng[16]=17;
	hin[16]=18;
	chem[16]=18;
	phy[16]=17;
	cs[16]=19;
	maths[16]=20;
	ict[16]=18;
	
	eng[17]=17;
	hin[17]=18;
	chem[17]=18;
	phy[17]=17;
	cs[17]=19;
	maths[17]=20;
	ict[17]=18;
	
	eng[18]=17;
	hin[18]=18;
	chem[18]=18;
	phy[18]=17;
	cs[18]=19;
	maths[18]=20;
	ict[18]=18;
	
	eng[19]=17;
	hin[19]=18;
	chem[19]=18;
	phy[19]=17;
	cs[19]=19;
	maths[19]=20;
	ict[19]=18;
	
	eng[20]=17;
	hin[20]=18;
	chem[20]=18;
	phy[20]=17;
	cs[20]=19;
	maths[20]=20;
	ict[20]=18;
	
	printf("Enter roll no of the student:");
	scanf("%d",&roll);
	
}

int print_name(int n)
{
	if(roll==1)
	printf("%c",name1);
	
	else if(roll==7)
	printf("%c",name2);
	
	else if(roll==10)
	printf("%c",name3);
	
	else if(roll==12)
	printf("%c",name4);
	
	else if(roll==13)
	printf("%c",name5);
	
	else if(roll==18)
	printf("%c",name6);
	
	else if(roll==19)
	printf("%c",name7);
	
	else if(roll==24)
	printf("%c",name8);
	
	else if(roll==25)
	printf("%c",name9);
	
	else if(roll==28)
	printf("%c",name10);
	
	else if(roll==29)
	printf("%c",name11);
	
	else if(roll==30)
	printf("%c",name12);
	
	else if(roll==35)
	printf("%c",name13);
	
	else if(roll==37)
	printf("%c",name14);
	
	else if(roll==49)
	printf("%c",name15);
	
	else if(roll==51)
	printf("%c",name16);
	
	else if(roll==53)
	printf("%c",name17);
	
	else if(roll==56)
	printf("%c",name18);
	
	else if(roll==58)
	printf("%c",name19);
	
	else if(roll==100)
	printf("%c",name20);
	
	else if(roll==101)
	printf("%c",name21);
	*/
}
