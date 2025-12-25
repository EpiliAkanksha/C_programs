//simple interest and compound interest calculations
#include<stdio.h>
#include<math.h>
int main()
{
	printf("enter p,t,r : ");
	float p,t,r,i,c,b;
	scanf("%f%f%f",&p,&t,&r);
	i = (p*t*r)/100;
	printf("\n simple interest: %.2f",i);
	b=1+(r/100);
	c = (p*pow(b,t))-p;
	printf("\n compound interest: %.2f",c);
	
	return 0;
}
