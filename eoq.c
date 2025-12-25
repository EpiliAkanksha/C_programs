#include<stdio.h>
int main()
{
	int d,sc,hc;
	double eoq,tbo;
	printf("enter the demand rate: ");
	scanf("%d",&d);
	printf("enter the setup cost: ");
	scanf("%d",&sc);
	printf("enter the holding cost: ");
	scanf("%d",&hc);
	
	eoq=sqrt(2.0*d*sc/hc);
	tbo=sqrt((float)(2*sc)/(d*hc));
	printf("EOQ: %.2lf",eoq);
	printf("\n TBO: %.2lf",tbo);
	return 0;
}
