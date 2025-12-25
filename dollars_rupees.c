//convert dollar to rupees
//1$=83.75rs
#include <stdio.h>
int main()
{
	int d;
	float r;
	printf("enter the money in dollars: ");
	scanf("%d",&d);
	r=83.75*d;
	printf("the money in rupees : %.2f",r);
	return 0;
}
