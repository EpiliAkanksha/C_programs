//convert dollar to rupees
//1$=83.75rs

//function with No parameter and with return type
//user defined function
#include <stdio.h>
float dol_rup()
{	
	float rupees;
	int d;
	printf("enter the money in dollars: ");
	scanf("%d",&d);	
	printf("\n dollar = %d",d);
	rupees=83.75*d;
	return rupees;
}
int main()// calling function
{
	
	float r;
	
	r=dol_rup(d);
	printf("\nthe money in rupees : %.2f",r);
	return 0;
}
