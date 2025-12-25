//convert dollar to rupees
//1$=83.75rs

//function with  parameter and with return type
//user defined function
#include <stdio.h>
float dol_rup(int d)
{	
	float rupees;
	printf("\n dollar = %d",d);
	rupees=83.75*d;
	return rupees;
}
int main()// calling function
{
	int d;
	float r;
	printf("enter the money in dollars: ");
	scanf("%d",&d);
	r=dol_rup(d);
	printf("\nthe money in rupees : %.2f",r);
	return 0;
}
